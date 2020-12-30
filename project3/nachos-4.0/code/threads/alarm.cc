// alarm.cc
//	Routines to use a hardware timer device to provide a
//	software alarm clock.  For now, we just provide time-slicing.
//
//	Not completely implemented.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "alarm.h"
#include "main.h"

//----------------------------------------------------------------------
// Alarm::Alarm
//      Initialize a software alarm clock.  Start up a timer device
//
//      "doRandom" -- if true, arrange for the hardware interrupts to 
//		occur at random, instead of fixed, intervals.
//----------------------------------------------------------------------

Alarm::Alarm(bool doRandom)
{
    timer = new Timer(doRandom, this);
}

//----------------------------------------------------------------------
// Alarm::CallBack
//	Software interrupt handler for the timer device. The timer device is
//	set up to interrupt the CPU periodically (once every TimerTicks).
//	This routine is called each time there is a timer interrupt,
//	with interrupts disabled.
//
//	Note that instead of calling Yield() directly (which would
//	suspend the interrupt handler, not the interrupted thread
//	which is what we wanted to context switch), we set a flag
//	so that once the interrupt handler is done, it will appear as 
//	if the interrupted thread called Yield at the point it is 
//	was interrupted.
//
//	For now, just provide time-slicing.  Only need to time slice 
//      if we're currently running something (in other words, not idle).
//	Also, to keep from looping forever, we check if there's
//	nothing on the ready list, and there are no other pending
//	interrupts.  In this case, we can safely halt.
//----------------------------------------------------------------------

void 
Alarm::CallBack() 
{
    Interrupt *interrupt = kernel->interrupt;
    MachineStatus status = interrupt->getStatus();
    bool woken = sleep_pool.PutReadyQueue();

    // add
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