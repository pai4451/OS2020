// userkernel.h
//	Global variables for the Nachos kernel, for the assignment
//	supporting running user programs.
//
//	The kernel supporting user programs is a version of the 
//	basic multithreaded kernel.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#ifndef USERKERNEL_H  
#define USERKERNEL_H

#include "kernel.h"
#include "filesys.h"
#include "machine.h"
#include "synchdisk.h"
#include "../threads/scheduler.h" // add

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

  private:
    // remove
    //bool debugUserProg;		// single step user program
	Thread* t[10];
	char*	execfile[10];
	int	execfileNum;
};

#endif //USERKERNEL_H
