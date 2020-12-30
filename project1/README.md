# Operating Systems Homework #1
## Thread Management

### Motivation

From the source code of `nachos-4.0/code/test/test1.c` and n`achos-4.0/code/test/test2.c`, one should expect to execute `test1.c`, the results will be a  series of decreasing numbers 9, 8, 7, 6, and execute test2.c the results will be a series of increasing numbers 20, 21, 22, 23, 24, 25. But when we execute the multiprogramming command: `./nachos -e ../test/test1 -e ../test/test2`, the result of test1.c becomes increasing in the end. This is because Nachos is using a one to one mapping scheme, which means that only uniprogramming is supported, and we have only a single page table. All process will use the same page table and therefore will map to the same physical page. If multiprogramming is implemented this scheme must be changed. In multiprogramming, this is an issue because the processes will execute the same code segment. We have to modify `nachos-4.0/code/userprog/addrspace.cc` and `nachos-4.0/code/userprog/addrspace.h` which creates the page table for a process. We find that in the AddrSpace constructor, the virtual and the physical page has the same number. We have to change this when implementing multiprogramming.

### Implementation

First, we add a static bool array in addrspace.h to keep track of the physical pages are used, and instantiate the array in `addrspace.cc`.
```C++
class AddrSpace {
  public:
    ...
  private:
    ...
    // add
    static bool UsedPhyPages[]; // track used physical pages
};
```


Each process corresponds to an AddrSpace instance, and in multiprogramming, we have to keep track of the corresponding information of physical page, which is `pageTable[i].physicalPage` in the source code. Thus, when we execute a certain process, the operating system will find the specific physical page in the page table. In original Nachos-4.0, every process shares the same physical page initially and  therefore leads to an unexpected result in multiprogramming. When the process load into memory, page table will record the corresponding physical page. We first create a pageTable in `addrspace.cc`. Then, we modify the function `AddrSpace::Load()` in `addrspace.cc` to find the first unused physical page by linear search and update the page of the process.
```C++
// add
pageTable = new TranslationEntry[numPages];
for (unsigned int i = 0; i<numPages;i++){
    unsigned int j = 0;
    pageTable[i].virtualPage = i;
    while (j < NumPhysPages && AddrSpace::UsedPhyPages[j] == TRUE){
        j++;
    }
    ASSERT(j < NumPhysPages);
        pageTable[i].physicalPage = j;
        AddrSpace::UsedPhyPages[j] = TRUE;
        pageTable[i].valid = TRUE;
        pageTable[i].use = FALSE;
        pageTable[i].dirty = FALSE;
        pageTable[i].readOnly = FALSE;
    }
```

In the execution phase, we have to calculate the entry point from the virtual memory address. The relation can be calculated as follows: we first calculate the virtual page and multiply by PageSize which is the page base, and the page offset is virAddr % PageSize. Finally, the sum of the page base and page offset is the entry point (physical address) we need on the main memory.
```C++
if (noffH.code.size > 0) {
        DEBUG(dbgAddr, "Initializing code segment.");
	DEBUG(dbgAddr, noffH.code.virtualAddr << ", " << noffH.code.size);
    // add
        unsigned int virAddr = noffH.code.virtualAddr;
        unsigned int phyAddr = pageTable[virAddr/PageSize].physicalPage * PageSize + virAddr % PageSize;
        	executable->ReadAt(
		&(kernel->machine->mainMemory[phyAddr]), 
			noffH.code.size, noffH.code.inFileAddr);
    }
```
```C++
if (noffH.initData.size > 0) {
        DEBUG(dbgAddr, "Initializing data segment.");
	DEBUG(dbgAddr, noffH.initData.virtualAddr << ", " << noffH.initData.size);
        unsigned int virAddr = noffH.code.virtualAddr;
        unsigned int phyAddr = pageTable[noffH.initData.virtualAddr/PageSize].physicalPage * PageSize + virAddr % PageSize;
        executable->ReadAt(
		&(kernel->machine->mainMemory[phyAddr]),
			noffH.initData.size, noffH.initData.inFileAddr);
    }
```
### Results
After finish the above modification, we compile the whole Nachos project again. The execution of the task now shows the desired results.
```
./nachos -e ../test/test1 -e ../test/test2
```
Output
```
Total threads number is 2
Thread ../test/test1 is executing.
Thread ../test/test2 is executing.
Print integer:9
Print integer:8
Print integer:7
Print integer:20
Print integer:21
Print integer:22
Print integer:23
Print integer:24
Print integer:6
return value:0
Print integer:25
return value:0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 300, idle 8, system 70, user 222
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0

```
