// kernel.h
//	Global variables for the Nachos kernel.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#ifndef KERNEL_H
#define KERNEL_H

#include "copyright.h"
#include "debug.h"
#include "utility.h"
#include "thread.h"
#include "scheduler.h"
#include "interrupt.h"
#include "stats.h"
#include "alarm.h"

class ThreadedKernel {
  public:
    ThreadedKernel(int argc, char **argv);
    				// Interpret command line arguments
    ~ThreadedKernel();		// deallocate the kernel
    
    void Initialize(); 		// initialize the kernel -- separated
				// from constructor because 
				// refers to "kernel" as a global

    void Run();			// do kernel stuff
				    
    void SelfTest();		// test whether kernel is working
    
// These are public for notational convenience; really, 
// they're global variables used everywhere.  Putting them into 
// a class makes it easier to support multiple kernels, when we
// get to the networking assignment.

    Thread *currentThread;	// the thread holding the CPU
    Scheduler *scheduler;	// the ready list
    Interrupt *interrupt;	// interrupt status
    Statistics *stats;		// performance metrics
    Alarm *alarm;		// the software alarm clock    

  private:
    bool randomSlice;		// enable pseudo-random time slicing
};


#endif // KERNEL_H
