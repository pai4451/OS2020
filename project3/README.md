# Operating Systems Homework #3
## Memory management
> [Project slides](https://hackmd.io/@2xu_sb9JT2KDaAH-UKS7PA/rkhnLKuuP#/)
### Motivation
Both the following test cases require lots of memory, and our goal is to run this two program concurrently, and get the correct result. 
```
./nachos -e ../test/sort
```
```
Total threads number is 1
Thread ../test/sort is executing.
Assertion failed: line 118 file ../userprog/addrspace.cc
Aborted (core dumped)
```
```
./nachos -e ../test/matmult
```
```
Total threads number is 1
Thread ../test/matmult is executing.
Assertion failed: line 118 file ../userprog/addrspace.cc
Aborted (core dumped)
```
```
./nachos -e ../test/sort -e ../test/matmult
```
```
Total threads number is 2
Thread ../test/sort is executing.
Thread ../test/matmult is executing.
Assertion failed: line 118 file ../userprog/addrspace.cc
Aborted (core dumped)
```
Note: Please use the following `sort.c` code, otherwise the result won't be the same.

```C++
/* sort.c 
 *    Test program to sort a large number of integers.
 *
 *    Intention is to stress virtual memory system.
 *
 *    Ideally, we could read the unsorted array off of the file system,
 *	and store the result back to the file system!
 */

#include "syscall.h"

int A[1024];	/* size of physical memory; with code, we'll run out of space!*/



int
main()
{

    int i, j, tmp;

    /* first initialize the array, in reverse sorted order */
    for (i = 0; i < 1024; i++)      
        A[i] = 1024 - i;


    /* then sort! */
    for (i = 0; i < 1023; i++) {
        for (j = 0; j < (1023 - i); j++) {
            if (A[j] > A[j + 1]) {  /* out of order -> need to swap ! */
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    Exit(A[0]);     /* and then we're done -- should be 1! */
}
```
In this project, we use demand paging to solve the limited memory issues. In a system that uses demand paging, the operating system copies a disk page into physical memory only if an attempt is made to access it and that page is not already in memory. To achieve this process a page table implementation is used. The page table maps logical memory to physical memory. The page table uses a bitwise operator to mark if a page is valid or invalid. A valid page is one that currently resides in main memory. An invalid page is one that currently resides in secondary memory. We will modify the following files to implement the demand paging system.
* `/code/userprog/userkernel.*`
* `/code/machine/machine.*`
* `/code/userprog/addrspace.*`
* `/code/machine/translate.*`

We implement two page replacement algorithms, i.e., Least Recently Used (LRU) and Random page replacement algorithms.


---

### Implementation

We first create a new SynchDisk called SwapDisk in `/code/userprog/userkernel.h` to simulate the secondary storage. Pages demanded by the process are swapped from secondary storage to main memory.<br>
`/code/userprog/userkernel.h`
```C++
class SynchDisk;
class UserProgKernel : public ThreadedKernel {
  public:
    UserProgKernel(int argc, char **argv);
				// Interpret command line arguments
    ~UserProgKernel();		// deallocate the kernel

    void Initialize();		// initialize the kernel 
    void Initialize(SchedulerType type); // add
    
    void Run();			// do kernel stuff 

    void SelfTest();		// test whether kernel is working
    // add
    SynchDisk *SwapDisk;     // SwapDisk saves pages if main memory is not enough
// These are public for notational convenience.
    Machine *machine;
    FileSystem *fileSystem;
    // add
    bool debugUserProg;     // single step user program
#ifdef FILESYS
    SynchDisk *synchDisk;
#endif // FILESYS
```
Next, we initialized SwapDisk in `/code/userprog/userkernel.cc`.
```C++
void
UserProgKernel::Initialize()
{
    ThreadedKernel::Initialize(RR); // init multithreading
    machine = new Machine(debugUserProg);
    fileSystem = new FileSystem();
    SwapDisk = new SynchDisk("New SwapDisk");// Swap disk for virtual memory
#ifdef FILESYS
    synchDisk = new SynchDisk("New SynchDisk");
#endif // FILESYS
}
```
We have to record the information about which frames of main and virtual memory are occupied, and the corresponding ID in `/code/machine/machine.h`.
```C++
// add
bool UsedPhyPage[NumPhysPages]; //record the pages in the main memory
bool UsedVirtualPage[NumPhysPages]; //record the pages in the virtual memory
int  ID_number; // machine ID
int PhyPageInfo[NumPhysPages]; //record physical page info (ID)

TranslationEntry *main_tab[NumPhysPages]; // pagetable
```
Since we are handling virtual memory, the ASSERT to guarantee the number of pages does not exceed the number of physical pages in main memory in `/code/userprog/addrspace.cc` is no longer needed.
```C++
//ASSERT(numPages <= NumPhysPages);		// check we're not trying
						// to run anything too big --
						// at least until we have
						// virtual memory
```
To implement virtual memory system. We modify the Load function in `/code/userprog/addrspace.cc`. The following for loop is used to find the available space for the page of this process, and the while loop check whether the j-th frame is used. The index j will increase 1 is being used, until an empty frame or exceed the number of physical pages. There are two different cases in the following. When the main memory still have empty frame, then we can put the page into the main memory and update the information to the page table. This step is achieved by the function ReadAt. The other case will be the main memory is fulled. Then we have check the available virtual memory space by the similar while loop and write the page in to SwapDisk by the WriteSector function.
For the Execute and SaveState function in `/code/userprog/addrspace.cc`, we add a flag in `/code/userprog/addrspace.h` to check whether the page table is successfully loaded to make the context-switch work. 
```C++
if (noffH.code.size > 0) {
        //DEBUG(dbgAddr, "Initializing code segment.");
	//DEBUG(dbgAddr, noffH.code.virtualAddr << ", " << noffH.code.size);
    // add
        for(unsigned int j=0,i=0;i < numPages ;i++){
            j=0;
            while(kernel->machine->UsedPhyPage[j]!=FALSE&&j<NumPhysPages){j++;}

            // main memory is enough, put the page to main memory
            if(j<NumPhysPages){   
                kernel->machine->UsedPhyPage[j]=TRUE;
                kernel->machine->PhyPageInfo[j]=ID;
                kernel->machine->main_tab[j]=&pageTable[i];
                pageTable[i].physicalPage = j;
                pageTable[i].valid = TRUE;
                pageTable[i].use = FALSE;
                pageTable[i].dirty = FALSE;
                pageTable[i].readOnly = FALSE;
                pageTable[i].ID =ID;
                pageTable[i].LRU_counter++; // LRU counter when save in memory
                executable->ReadAt(&(kernel->machine->mainMemory[j*PageSize]),PageSize, noffH.code.inFileAddr+(i*PageSize));  
            }
            // main memory is not enough, use virtual memory
            else{ 
                char *buffer;
                buffer = new char[PageSize];
                tmp=0;
                while(kernel->machine->UsedVirtualPage[tmp]!=FALSE){tmp++;}
                kernel->machine->UsedVirtualPage[tmp]=true;
                pageTable[i].virtualPage=tmp; //record the virtual page we save 
                pageTable[i].valid = FALSE; //not load in main memory
                pageTable[i].use = FALSE;
                pageTable[i].dirty = FALSE;
                pageTable[i].readOnly = FALSE;
                pageTable[i].ID =ID;
                executable->ReadAt(buffer,PageSize, noffH.code.inFileAddr+(i*PageSize));
                kernel->SwapDisk->WriteSector(tmp,buffer); // write in virtual memory (SwapDisk)

            }
        }
    }
```
Now the operating system is capable to put those pages that cannot put in main memory to virtual memory. In the following steps, we will implement two page replacement algorithms, i.e., Least Recently Used (LRU) and Random page replacement algorithms.

---

### LRU

For the first page replacement algorithms, we implement Least Recently Used (LRU) algorithm. We implement by a hardware counter `LRU_counter` in `/code/machine/traslate.h`. 
```C++
class TranslationEntry {
  public:
    unsigned int virtualPage;  	// The page number in virtual memory.
    unsigned int physicalPage;  // The page number in real memory (relative to the
			//  start of "mainMemory"
    bool valid;         // If this bit is set, the translation is ignored.
			// (In other words, the entry hasn't been initialized.)
    bool readOnly;	// If this bit is set, the user program is not allowed
			// to modify the contents of the page.
    bool use;           // This bit is set by the hardware every time the
			// page is referenced or modified.
    bool dirty;         // This bit is set by the hardware every time the
			// page is modified.
    // add
    int LRU_counter;    // counter for LRU
   
    int ID; // page table ID
};
```
The translation by the LRU page replacement is implemented in `code/machine/traslate.cc`. First, we check the valid-invalid bit of the page table. If is not valid, it means the page is not in the main memory. Hence, we need to load from the secondary storage. There are two cases that may happen. First, if there are some empty frame in the main memory, then we can just load the page into it. The other case is that the main memory is fulled. In this cases, we create two buffers and runs least recently used (LRU) algorithm to find the victim. The ReadSector and WriteSector are used to read/write the temporarily saved pages found by the LRU algorithm. The victim is pull out from the main memory, and then swapped by our page into the corresponding frame. The page table will be updated correspondingly in both cases. In our implementation, LRU will perform linear search on LRU_counter to find the least recently used page.
```C++
else if (!pageTable[vpn].valid) {
        // not in main memory, demand paging
        /* remove
	    DEBUG(dbgAddr, "Invalid virtual page # " << virtAddr);
	    return PageFaultException;
        */
        //printf("Page fault\n");
        kernel->stats->numPageFaults++; // page fault
        j=0;
        while(kernel->machine->UsedPhyPage[j]!=FALSE&&j<NumPhysPages){j++;}
        // load the page into the main memory if the main memory is not full  
        if(j<NumPhysPages){
            char *buffer; //temporary save page 
            buffer = new char[PageSize];
            kernel->machine->UsedPhyPage[j]=TRUE;
            kernel->machine->PhyPageInfo[j]=pageTable[vpn].ID;
            kernel->machine->main_tab[j]=&pageTable[vpn];
            pageTable[vpn].physicalPage = j;
            pageTable[vpn].valid = TRUE;
            pageTable[vpn].LRU_counter++; // counter for LRU

            kernel->SwapDisk->ReadSector(pageTable[vpn].virtualPage, buffer);
            bcopy(buffer,&mainMemory[j*PageSize],PageSize);
        }
        // main memory is full, page replacement
        else{
            char *buffer1;
            char *buffer2;
            buffer1 = new char[PageSize];
            buffer2 = new char[PageSize];
            //Random
            //victim = (rand()%32);

            //LRU
            int min = pageTable[0].LRU_counter;
            victim=0;
            for(int index=0;index<32;index++){
                if(min > pageTable[index].LRU_counter){
                    min = pageTable[index].LRU_counter;
                    victim = index;
                }
            }
            pageTable[victim].LRU_counter++;  
                                                
            //printf("Number %d page is swapped out\n",victim);

            // perform page replacement, write victim frame to disk, read desired frame to memory
            bcopy(&mainMemory[victim*PageSize],buffer1,PageSize);
            kernel->SwapDisk->ReadSector(pageTable[vpn].virtualPage, buffer2);
            bcopy(buffer2,&mainMemory[victim*PageSize],PageSize);
            kernel->SwapDisk->WriteSector(pageTable[vpn].virtualPage,buffer1);
         
            main_tab[victim]->virtualPage=pageTable[vpn].virtualPage;
            main_tab[victim]->valid=FALSE;

            //save the page into the main memory

            pageTable[vpn].valid = TRUE;
            pageTable[vpn].physicalPage=victim;
            kernel->machine->PhyPageInfo[victim]=pageTable[vpn].ID;
            main_tab[victim]=&pageTable[vpn];
            //printf("Page replacement finish\n");
        }
    }
```
---

### Random
Since the LRU algorithm requires linear search to the counter, and therefore has a high complexity. Here, we implement a simple random replacement algorithm. Random replacement algorithm randomly selects a candidate item and discards it to make space when necessary. This algorithm does not require keeping any information about the access history. For its simplicity, it has been used in ARM processors. It admits efficient stochastic simulations.
```C++
else if (!pageTable[vpn].valid) {
        // not in main memory, demand paging
        /* remove
	    DEBUG(dbgAddr, "Invalid virtual page # " << virtAddr);
	    return PageFaultException;
        */
        //printf("Page fault\n");
        kernel->stats->numPageFaults++; // page fault
        j=0;
        while(kernel->machine->UsedPhyPage[j]!=FALSE&&j<NumPhysPages){j++;}
        // load the page into the main memory if the main memory is not full  
        if(j<NumPhysPages){
            char *buffer; //temporary save page 
            buffer = new char[PageSize];
            kernel->machine->UsedPhyPage[j]=TRUE;
            kernel->machine->PhyPageInfo[j]=pageTable[vpn].ID;
            kernel->machine->main_tab[j]=&pageTable[vpn];
            pageTable[vpn].physicalPage = j;
            pageTable[vpn].valid = TRUE;

            kernel->SwapDisk->ReadSector(pageTable[vpn].virtualPage, buffer);
            bcopy(buffer,&mainMemory[j*PageSize],PageSize);
        }
        // main memory is full, page replacement
        else{
            char *buffer1;
            char *buffer2;
            buffer1 = new char[PageSize];
            buffer2 = new char[PageSize];
            //Random
            victim = (rand()%32);
                                                
            //printf("Number %d page is swapped out\n",victim);

            // perform page replacement, write victim frame to disk, read desired frame to memory
            bcopy(&mainMemory[victim*PageSize],buffer1,PageSize);
            kernel->SwapDisk->ReadSector(pageTable[vpn].virtualPage, buffer2);
            bcopy(buffer2,&mainMemory[victim*PageSize],PageSize);
            kernel->SwapDisk->WriteSector(pageTable[vpn].virtualPage,buffer1);
         
            main_tab[victim]->virtualPage=pageTable[vpn].virtualPage;
            main_tab[victim]->valid=FALSE;

            //save the page into the main memory

            pageTable[vpn].valid = TRUE;
            pageTable[vpn].physicalPage=victim;
            kernel->machine->PhyPageInfo[victim]=pageTable[vpn].ID;
            main_tab[victim]=&pageTable[vpn];
            //printf("Page replacement finish\n");
        }
    }
```

---

### Results
In this section, we demonstrate the experimental result. Note that we comment out random replacement algorithm in the submitted code. Therefore, by default our code will use LRU.

**A. LRU**

**1. Sort**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/sort`
```
Total threads number is 1
Thread ../test/sort is executing.
return value:1
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 402231030, idle 61021716, system 341209310, user 4
Disk I/O: reads 5235, writes 5249
Console I/O: reads 0, writes 0
Paging: faults 5235
Network I/O: packets received 0, sent 0
```
The return value is 1, which is the first element of sorted array A[0] as expected.

**2. Matmult**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/matmult`
```Total threads number is 1
Thread ../test/matmult is executing.
return value:7220
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 7323030, idle 1334076, system 5988950, user 4
Disk I/O: reads 80, writes 102
Console I/O: reads 0, writes 0
Paging: faults 80
Network I/O: packets received 0, sent 0
```
The return value is 7220, which is the expected result.

**3. Sort + Matmult**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/sort -e ../test/matmult`
```
Total threads number is 2
Thread ../test/sort is executing.
Thread ../test/matmult is executing.
return value:1
return value:7220
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 410982030, idle 63780985, system 347201040, user 5
Disk I/O: reads 5345, writes 5413
Console I/O: reads 0, writes 0
Paging: faults 5345
Network I/O: packets received 0, sent 0
```

**B. Random**

**1. Sort**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/sort`
```
Total threads number is 1
Thread ../test/sort is executing.
return value:1
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 351762530, idle 10803116, system 340959410, user 4
Disk I/O: reads 1070, writes 1084
Console I/O: reads 0, writes 0
Paging: faults 1070
Network I/O: packets received 0, sent 0
```
The return value is 1, which is the first element of sorted array A[0] as expected.

**2. Matmult**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/matmult`
```
Total threads number is 1
Thread ../test/matmult is executing.
return value:7220
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 7376770, idle 1386616, system 5990150, user 4
Disk I/O: reads 100, writes 122
Console I/O: reads 0, writes 0
Paging: faults 100
Network I/O: packets received 0, sent 0
```
The return value is 7220, which is the expected result.

**3. Sort + Matmult**

The result is shown below, and it can be reproduced by the following command 
`./nachos -e ../test/sort -e ../test/matmult`
```
Total threads number is 2
Thread ../test/sort is executing.
Thread ../test/matmult is executing.
return value:1
return value:7220
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 361001530, idle 14049065, system 346952460, user 5
Disk I/O: reads 1202, writes 1270
Console I/O: reads 0, writes 0
Paging: faults 1202
Network I/O: packets received 0, sent 0
```