// kernel.cc 
//	Initialization and cleanup routines for the Nachos kernel.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "debug.h"
#include "main.h"
#include "kernel.h"
#include "sysdep.h"
#include "synch.h"
#include "synchlist.h"
#include "libtest.h"
#include "elevatortest.h"
#include "string.h"

//----------------------------------------------------------------------
// ThreadedKernel::ThreadedKernel
// 	Interpret command line arguments in order to determine flags 
//	for the initialization (see also comments in main.cc)  
//----------------------------------------------------------------------

ThreadedKernel::ThreadedKernel(int argc, char **argv)
{
    randomSlice = FALSE; 
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-rs") == 0) {
 	    ASSERT(i + 1 < argc);
	    RandomInit(atoi(argv[i + 1]));// initialize pseudo-random
					// number generator
	    randomSlice = TRUE;
	    i++;
        } else if (strcmp(argv[i], "-u") == 0) {
            cout << "Partial usage: nachos [-rs randomSeed]\n";
	}
    }
}

//----------------------------------------------------------------------
// ThreadedKernel::Initialize
// 	Initialize Nachos global data structures.  Separate from the 
//	constructor because some of these refer to earlier initialized
//	data via the "kernel" global variable.
//----------------------------------------------------------------------

void
ThreadedKernel::Initialize()
{
    stats = new Statistics();		// collect statistics
    interrupt = new Interrupt;		// start up interrupt handling
    scheduler = new Scheduler();	// initialize the ready queue
    alarm = new Alarm(randomSlice);	// start up time slicing

    // We didn't explicitly allocate the current thread we are running in.
    // But if it ever tries to give up the CPU, we better have a Thread
    // object to save its state. 
    currentThread = new Thread("main");		
    currentThread->setStatus(RUNNING);

    interrupt->Enable();
}

//----------------------------------------------------------------------
// ThreadedKernel::~ThreadedKernel
// 	Nachos is halting.  De-allocate global data structures.
//----------------------------------------------------------------------

ThreadedKernel::~ThreadedKernel()
{
    delete alarm;
    delete scheduler;
    delete interrupt;
    delete stats;
    
    Exit(0);
}

//----------------------------------------------------------------------
// ThreadedKernel::Run
// 	Run the Nachos kernel.  For now, do nothing. In practice,
//	after initializing data structures, the kernel would
//	start a user program to print the login prompt.
//----------------------------------------------------------------------

void
ThreadedKernel::Run()
{
    // NOTE: if the procedure "main" returns, then the program "nachos"
    // will exit (as any other normal program would).  But there may be
    // other threads on the ready list (started in SelfTest).  
    // We switch to those threads by saying that the "main" thread 
    // is finished, preventing it from returning.
    currentThread->Finish();	
    // not reached
}

//----------------------------------------------------------------------
// ThreadedKernel::SelfTest
//      Test whether this module is working.
//----------------------------------------------------------------------

void
ThreadedKernel::SelfTest() {
   Semaphore *semaphore;
   SynchList<int> *synchList;
   
   LibSelfTest();		// test library routines
   
   currentThread->SelfTest();	// test thread switching
   
   				// test semaphore operation
   semaphore = new Semaphore("test", 0);
   semaphore->SelfTest();
   delete semaphore;
   
   				// test locks, condition variables
				// using synchronized lists
   synchList = new SynchList<int>;
   synchList->SelfTest(9);
   delete synchList;

   ElevatorSelfTest();
}
