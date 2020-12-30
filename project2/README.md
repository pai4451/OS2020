# Operating Systems Homework #2
## System Call & CPU Scheduling
> [Project slides](https://hackmd.io/@2xu_sb9JT2KDaAH-UKS7PA/HkqwUPuOw#/)
### Part 1 - System call
### Motivation
In this homework, we have to implement a system call `Sleep()`. First, we need to define a system call number for Sleep in `/code/userprog/syscall.h`. Second, we have to modify `/code/test/start.s` to prepare registers for Sleep. Third, we add a new case for Sleep in ExceptionHandler in `/code/userprog/exception.cc`. Last but not least, we will modify `/code/threads/alarm.h` and `/code/threads/alarm.cc` to generate an interrupt every X time ticks. The `WaitUntil()` function will be called when a thread going to sleep, and the `CallBack()` function will check which thread should wake up.

---
### Implementation
We first define a system call number and the function prototype for Sleep.<br>
`/code/userprog/syscall.h`
```C++
...
#define SC_PrintInt	11
#define SC_Sleep	12
...
void PrintInt(int number);	//my System Call
void Sleep(int number);
```
Second, we prepare the registers for Sleep and closely follow the way the predefined system call PrintInt did.<br>
`/code/test/start.s`
```assembly
...
    .globl  Sleep
	.ent    Sleep
Sleep:
	addiu   $2,$0,SC_Sleep
	syscall
	j       $31
	.end    Sleep
```
Third, we add a new case for Sleep, and call WaitUntil() when a thread going to sleep.<br>
`/code/userprog/exception.cc`
```C++
...
case SC_Sleep:
    val=kernel->machine->ReadRegister(4);
    cout << "Sleep duration:" << val << "(ms)" << endl;
    kernel->alarm->WaitUntil(val);
    return;
```
We have to implement a software alarm clock, that generates an interrupt every X time ticks. We define two classes SleepThread and SleepPool. SleepThread is made for the thread need to be slept, given input time x. SleepPool contains a list structure to save the threads in sleep, and take out the thread to the ready queue after sleep.<br>
`/code/threads/alarm.h`
```C++
#include "thread.h"
#include <list>

class SleepThread {
    public:
        SleepThread(Thread* t, int x){
            thread_to_sleep = t;
            duration = x;
        }
        Thread* thread_to_sleep;
        int duration;
    };

class SleepPool {
    public:
        SleepPool(){
            interrupt_count = 0;
        };
        void PutToSleep(Thread *t, int x);
    bool PutReadyQueue();
    bool IsEmpty();
    int interrupt_count;
    std::list<SleepThread> SleepThread_list;
};

// The following class defines a software alarm clock. 
class Alarm : public CallBackObj {
  public:
    ...
  private:
    ...
	SleepPool sleep_pool;
    ...
};

```
The interrupt_count in SleepPool is served as a timer. We can check at a certain time which thread should be woken up by comparing to interrupt_count. If the current time is larger than interrupt_count, then this thread should be woken up. When a thread calls Sleep(), it will call WaitUntil() in Alarm and put it into SleepPool. When CallBack() is made, it will check which threads to be woken up in SleepPool.<br>
`/code/threads/alarm.cc`
```C++
void 
Alarm::CallBack() 
{
    Interrupt *interrupt = kernel->interrupt;
    MachineStatus status = interrupt->getStatus();
    bool woken = sleep_pool.PutReadyQueue();

    //add
    kernel->currentThread->setThreadPriority(kernel->currentThread->getThreadPriority() - 1);
    if (status == IdleMode && !woken && sleep_pool.IsEmpty()) {// is it time to quit?
        if (!interrupt->AnyFutureInterrupts()) {
        timer->Disable();   // turn off the timer
    }
    } else {            // there's someone to preempt
            if(kernel->scheduler->getSchedulerType() == Priority ) {
                cout << "Preemptive scheduling: interrupt->YieldOnReturn" << endl;
                interrupt->YieldOnReturn();
            }
            else if(kernel->scheduler->getSchedulerType() == RR){
                interrupt->YieldOnReturn();
            }
    }
}

void Alarm::WaitUntil(int x) {
    IntStatus oldLevel = kernel->interrupt->SetLevel(IntOff);
    Thread* t = kernel->currentThread;

    // add
    // count burst time
    int duration = kernel->stats->userTicks - t->getThreadStartTime();
    t->setCpuBurstTime(t->getCpuBurstTime() + duration);
    t->setThreadStartTime(kernel->stats->userTicks);
    cout << "Alarm::WaitUntil sleep" << endl;
    sleep_pool.PutToSleep(t, x);
    kernel->interrupt->SetLevel(oldLevel);
}

bool SleepPool::IsEmpty() {
    return SleepThread_list.size() == 0;
}

void SleepPool::PutToSleep(Thread*t, int x) {
    ASSERT(kernel->interrupt->getLevel() == IntOff);
    SleepThread_list.push_back(SleepThread(t, interrupt_count + x));
    t->Sleep(false);
}

bool SleepPool::PutReadyQueue() {
    bool woken = false;
    interrupt_count ++;
    for(std::list<SleepThread>::iterator it = SleepThread_list.begin(); 
        it != SleepThread_list.end(); it++) {
        if(interrupt_count >= it->duration) {
            woken = true;
            cout << "SleepPool::PutReadyQueue, a thread is taken out" << endl;
            kernel->scheduler->ReadyToRun(it->thread_to_sleep);
            it = SleepThread_list.erase(it);
        }
    }
    return woken;
}
```
We design our own test code similar to `test1` and `test2`. Here we named as `sleep1.c` and `sleep2.c` as shown below. We modify Makefile and compile it in the same way as `test1` and `test2`. Note that the period of `sleep2.c` is 1/5 shorter than `sleep1.c`, and `sleep1.c` and `sleep2.c` will print integer 8888 and 10, respectively.  So we expect to see four 10’s and one 8888 in the first 50000 (ms) and the pattern afterward will be five 10’s between two consecutive 8888.<br>
`/code/test/sleep1.c`
```C++
#include "syscall.h"
int main(){
    int i;
    for(i = 0; i < 4; i++) {
        Sleep(500000);
        PrintInt(8888);
    }
    return 0;
}
```
`/code/test/sleep2.c`
```C++
#include "syscall.h"
int main() {
    int i;
    for(i = 0; i < 20; i++) {
        Sleep(100000);
        PrintInt(10);
    }
    return 0;
}
```
---
### Results
The result is shown below, and it can be reproduced by the following command 
```
./nachos -e ../test/sleep1 -e ../test/sleep2.
```
Output
```
Total threads number is 2
Thread ../test/sleep1 is executing.
Thread ../test/sleep2 is executing.
Sleep duration:500000(ms)
Alarm::WaitUntil sleep
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:8888
Sleep duration:500000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:8888
Sleep duration:500000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:8888
Sleep duration:500000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
Sleep duration:100000(ms)
Alarm::WaitUntil sleep
SleepPool::PutReadyQueue, a thread is taken out
Print integer:8888
return value:0
SleepPool::PutReadyQueue, a thread is taken out
Print integer:10
return value:0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 200000200, idle 199999066, system 530, user 604
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
....
```
---
### Part 2 - CPU Scheduling
### Motivation
We will implement different CPU scheduling algorithms including First-Come-First-Service (FCFS), Shortest-Job-First (SJF), and Priority. We will modify `threads/thread.cc` and design two test cases. We add cpuburstTime and threadstartTime and threadPriority attributes and corresponding functions in `threads/thread.h` to make CPU scheduling work. In order to make testing convenient, we add another constructor for `Class Scheduler` in `threads/scheduler.h`, for which it can take the argument RR, SJF, Priority, and FIFO. We implement different kinds of compare functions and create different SortedList when initializing different kinds of the scheduler in `threads/scheduler.cc`. To make priority preemptive, we modify `CallBack()` to check whether a higher priority process needs to do, and the `WaitUntil()` function to calculate CPU burst time in `threads/alaram.cc`.


---
### Implementation
We design 2 test cases as required (to run the second test case please uncomment the block of code). 

Thread      |  | A  | B | C | D
------- |-------|-------|---   |  --- | --
Test case #1  | Priority | 3|	1|	4	|5
| |Cpu burst time|8	|4|	9|	5
Test case #2  | Priority | 5|	1	|3|	2
| |Cpu burst time|3|	9	|7|	3


We create `ThreadInfo()` to print the current running thread and remaining CPU burst time, and design our own test cases in `Thread::SchedulingTest()`. The second test case is comment out, if you want to check the second test case please comment out the first case.<br>
`threads/thread.cc`
```C++
//add
void
ThreadInfo() {
    Thread *thread = kernel->currentThread;
    while (thread->getCpuBurstTime() > 0) {
        thread->setCpuBurstTime(thread->getCpuBurstTime() - 1);
        kernel->interrupt->OneTick();
        cout << "Running thread " << kernel->currentThread->getName() 
        << ": cpu burst time remaining " << kernel->currentThread->getCpuBurstTime() << endl;
    }
}

void
Thread::SchedulingTest()
{
    //Test case 1
    const int THREAD_NUM = 4;
    char *name[THREAD_NUM] = {"A", "B", "C", "D"};
    int thread_priority[THREAD_NUM] = {3, 1, 4, 5};
    int cpu_burst[THREAD_NUM] = {8, 4, 9, 5};
    /* //Test case 2
    const int THREAD_NUM = 4;
    char *name[THREAD_NUM] = {"A", "B", "C", "D"};
    int thread_priority[THREAD_NUM] = {5, 1, 3, 2};
    int cpu_burst[THREAD_NUM] = {3, 9, 7, 3};
    */
    Thread *t;
    for (int i = 0; i < THREAD_NUM; i++) {
        t = new Thread(name[i]);
        t->setThreadPriority(thread_priority[i]);
        t->setCpuBurstTime(cpu_burst[i]);
        t->Fork((VoidFunctionPtr) ThreadInfo, (void *)NULL);
    }
    kernel->currentThread->Yield();
}
```
We add function prototype in class Thread to initialize CPU burst time or thread priority.<br>
`threads/thread.h`
```C++
class Thread {
  private:
    ...
    //add
    void setCpuBurstTime(int t)    {cpuburstTime = t;}
    int getCpuBurstTime()      {return cpuburstTime;}
    void setThreadStartTime(int t)    {threadstartTime = t;}
    int getThreadStartTime()      {return threadstartTime;}
    void setThreadPriority(int t) {threadPriority = t;}
    int getThreadPriority()       {return threadPriority;}
    static void SchedulingTest();
  private:
    ...
    int cpuburstTime;  // cpu burst time
    int threadstartTime;  // the start time of a thread
    int threadPriority;   // the thread priority 
```
We add constructor which receive different SchedulerType initializer in ThreadedKernel in `threads/kernel.cc and threads/kernel.h`, similarly in `userprog/userkernel.h`, `userprog/userkernel.cc`, `network/netkernel.h`, and `network/netkernel.cc`.
In `threads/kernel.cc`, we also add `SelfTest()` to test our self-designed `SchedulingTest()`.<br>
`threads/kernel.cc`
```C++
void
ThreadedKernel::Initialize() {
    Initialize(RR);
}

void
ThreadedKernel::Initialize(SchedulerType type)
{
    ...
    scheduler = new Scheduler(type);  /...
}
void
ThreadedKernel::SelfTest() {
   ...
   currentThread->SelfTest();	// test thread switching
   Thread::SchedulingTest();
    ...
}
```
`threads/kernel.h`
```C++
class ThreadedKernel {
  public:
    ThreadedKernel(int argc, char **argv);
    ...
    void Initialize(SchedulerType type);
    void Initialize()
    ...
```
In the main function, input arguments will be FCFS, SJF or PRIORITY. These are different SchedulerType input.<br>
`threads/main.cc`
```C++
int
main(int argc, char **argv)
{
    ...
    //add
    SchedulerType type;
    if(strcmp(argv[1], "FCFS") == 0) {
        type = FIFO;
    } else if (strcmp(argv[1], "SJF") == 0) {
        type = SJF;
    } else if (strcmp(argv[1], "PRIORITY") == 0) {
        type = Priority;
    } else {
        type = RR;
    }

    kernel = new KernelType(argc, argv);
    kernel->Initialize(type); // add
    
    CallOnUserAbort(Cleanup);		// if user hits ctl-C

    kernel->SelfTest();
    kernel->Run();
    
    return 0;
}
```
In SchedulerType, we define SJF, Priority, FIFO, and a SchedulerType constructor for class Scheduler.<br>
`threads/scheduler.h`
```C++
enum SchedulerType {
        RR,     // Round Robin
        SJF,
        Priority,
        FIFO //add
};

class Scheduler {
  public:
	Scheduler();		// Initialize list of ready threads 
	Scheduler(SchedulerType type);		//  add Initialize list of ready threads 
    ...
    SchedulerType getSchedulerType() {return schedulerType;}
    void setSchedulerType(SchedulerType t) {schedulerType = t;}
    ...
};
```
Here in scheduler.cc we define different compare functions for different Scheduler, and a SortedList is created with different input arguments to put threads in.<br>
`threads/scheduler.cc`
```C++
int SJFCompare(Thread *a, Thread *b) {
    if(a->getCpuBurstTime() == b->getCpuBurstTime())
        return 0;
    else if (a->getCpuBurstTime() > b->getCpuBurstTime())
        return 1;
    else
        return -1;
}
int PRIORITYCompare(Thread *a, Thread *b) {
    if(a->getThreadPriority() == b->getThreadPriority())
        return 0;
    else if (a->getThreadPriority() > b->getThreadPriority())
        return 1;
    else
        return -1;
}
int FIFOCompare(Thread *a, Thread *b) {
    return 1;
}

Scheduler::Scheduler() {
    Scheduler(RR);
}
Scheduler::Scheduler(SchedulerType type)
{
    schedulerType = type;
    switch(schedulerType) {
    case RR:
        readyList = new List<Thread *>;
        break;
    case SJF:
        readyList = new SortedList<Thread *>(SJFCompare);
        break;
    case Priority:
        readyList = new SortedList<Thread *>(PRIORITYCompare);
        break;
    case FIFO:
        readyList = new SortedList<Thread *>(FIFOCompare);
        break;
    }
    toBeDestroyed = NULL;
} 
```
To make PRIORITY preemptive, we modify `CallBack()` to allow preempt if we have some other higher priority thread.<br>
`threads/alarm.cc`
```C++
void 
Alarm::CallBack() 
{
    Interrupt *interrupt = kernel->interrupt;
    MachineStatus status = interrupt->getStatus();
    bool woken = sleep_pool.PutReadyQueue();

    //add
    kernel->currentThread->setThreadPriority(kernel->currentThread->getThreadPriority() - 1);
    if (status == IdleMode && !woken && sleep_pool.IsEmpty()) {// is it time to quit?
        if (!interrupt->AnyFutureInterrupts()) {
        timer->Disable();   // turn off the timer
    }
    } else {            // there's someone to preempt
            if(kernel->scheduler->getSchedulerType() == Priority ) {
                cout << "Preemptive scheduling: interrupt->YieldOnReturn" << endl;
                interrupt->YieldOnReturn();
            }
            else if(kernel->scheduler->getSchedulerType() == RR){
                interrupt->YieldOnReturn();
            }
    }
}

void Alarm::WaitUntil(int x) {
    IntStatus oldLevel = kernel->interrupt->SetLevel(IntOff);
    Thread* t = kernel->currentThread;

    // add
    // count burst time
    int duration = kernel->stats->userTicks - t->getThreadStartTime();
    t->setCpuBurstTime(t->getCpuBurstTime() + duration);
    t->setThreadStartTime(kernel->stats->userTicks);
    cout << "Alarm::WaitUntil sleep" << endl;
    sleep_pool.PutToSleep(t, x);
    kernel->interrupt->SetLevel(oldLevel);
}
```

---


### Results
We design two test cases and the results are shown in the following figures, which can be reproduced by `./nachos (FCFS/SJF/PRIORITY)`. The first test case is shown in the previous table.
We expect the results will be A->B->C->D for FCFS, for B->D->A->C for SJF, and B->A->C->D for PRIORITY.<br>
**Test case #1**<br>
FCFS<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
*** thread 0 looped 4 times
*** thread 1 looped 4 times
Running thread A: cpu burst time remaining 7
Running thread A: cpu burst time remaining 6
Running thread A: cpu burst time remaining 5
Running thread A: cpu burst time remaining 4
Running thread A: cpu burst time remaining 3
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
Running thread C: cpu burst time remaining 8
Running thread C: cpu burst time remaining 7
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
Running thread D: cpu burst time remaining 4
Running thread D: cpu burst time remaining 3
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2700, idle 120, system 2580, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
FCFS: A->B->C->D as expected.

SJF<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
*** thread 0 looped 4 times
*** thread 1 looped 4 times
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
Running thread D: cpu burst time remaining 4
Running thread D: cpu burst time remaining 3
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
Running thread A: cpu burst time remaining 7
Running thread A: cpu burst time remaining 6
Running thread A: cpu burst time remaining 5
Running thread A: cpu burst time remaining 4
Running thread A: cpu burst time remaining 3
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Running thread C: cpu burst time remaining 8
Running thread C: cpu burst time remaining 7
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2600, idle 20, system 2580, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
SJF: B->D->A->C as expected.

PRIORITY<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
Preemptive scheduling: interrupt->YieldOnReturn
*** thread 1 looped 4 times
*** thread 0 looped 4 times
Preemptive scheduling: interrupt->YieldOnReturn
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Running thread A: cpu burst time remaining 7
Running thread A: cpu burst time remaining 6
Running thread A: cpu burst time remaining 5
Running thread A: cpu burst time remaining 4
Running thread A: cpu burst time remaining 3
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Running thread C: cpu burst time remaining 8
Running thread C: cpu burst time remaining 7
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Running thread C: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Running thread D: cpu burst time remaining 4
Running thread D: cpu burst time remaining 3
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2900, idle 120, system 2780, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
PRIORITY: B->A->C->D as expected, and we also print out instructions when preemptive scheduling happened.

**Test case #2**<br>
FCFS<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
*** thread 0 looped 4 times
*** thread 1 looped 4 times
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Running thread B: cpu burst time remaining 8
Running thread B: cpu burst time remaining 7
Running thread B: cpu burst time remaining 6
Running thread B: cpu burst time remaining 5
Running thread B: cpu burst time remaining 4
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2700, idle 160, system 2540, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
FCFS: A->B->C->D as expected.

SJF<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
*** thread 0 looped 4 times
*** thread 1 looped 4 times
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
Running thread B: cpu burst time remaining 8
Running thread B: cpu burst time remaining 7
Running thread B: cpu burst time remaining 6
Running thread B: cpu burst time remaining 5
Running thread B: cpu burst time remaining 4
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2600, idle 60, system 2540, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
SJF: A->D->C->B as expected.

PRIORITY<br>
```
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
*** thread 0 looped 4 times
*** thread 1 looped 4 times
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
Running thread B: cpu burst time remaining 8
Running thread B: cpu burst time remaining 7
Running thread B: cpu burst time remaining 6
Running thread B: cpu burst time remaining 5
Running thread B: cpu burst time remaining 4
Running thread B: cpu burst time remaining 3
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2600, idle 60, system 2540, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
yaoweipai@Ubuntu1404:~/nachos-4.0/code/threads$ ./nachos PRIORITY
*** thread 0 looped 0 times
*** thread 1 looped 0 times
*** thread 0 looped 1 times
*** thread 1 looped 1 times
*** thread 0 looped 2 times
*** thread 1 looped 2 times
*** thread 0 looped 3 times
*** thread 1 looped 3 times
Preemptive scheduling: interrupt->YieldOnReturn
*** thread 1 looped 4 times
*** thread 0 looped 4 times
Preemptive scheduling: interrupt->YieldOnReturn
Running thread B: cpu burst time remaining 8
Running thread B: cpu burst time remaining 7
Running thread B: cpu burst time remaining 6
Running thread B: cpu burst time remaining 5
Running thread B: cpu burst time remaining 4
Running thread B: cpu burst time remaining 3
Preemptive scheduling: interrupt->YieldOnReturn
Running thread B: cpu burst time remaining 2
Running thread B: cpu burst time remaining 1
Running thread B: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Running thread D: cpu burst time remaining 2
Running thread D: cpu burst time remaining 1
Running thread D: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Running thread C: cpu burst time remaining 6
Running thread C: cpu burst time remaining 5
Running thread C: cpu burst time remaining 4
Running thread C: cpu burst time remaining 3
Running thread C: cpu burst time remaining 2
Running thread C: cpu burst time remaining 1
Running thread C: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Running thread A: cpu burst time remaining 2
Running thread A: cpu burst time remaining 1
Running thread A: cpu burst time remaining 0
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
Preemptive scheduling: interrupt->YieldOnReturn
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 2800, idle 110, system 2690, user 0
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
PRIORITY: B->D->C->A as expected, and we also print out instructions when preemptive scheduling happened.