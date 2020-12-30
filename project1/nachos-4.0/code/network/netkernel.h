// netkernel.h
//	Global variables for the Nachos kernel, for the assignment
//	on distributed systems.
//
//	The network kernel is a version of the 
//	basic multithreaded kernel.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#ifndef NETKERNEL_H  
#define NETKERNEL_H

#include "userkernel.h"

class PostOfficeInput;
class PostOfficeOutput;

class NetKernel : public UserProgKernel {
  public:
    NetKernel(int argc, char **argv);
				// Interpret command line arguments
    ~NetKernel();		// deallocate the kernel

    void Initialize();		// initialize the kernel 

    void Run();			// do kernel stuff 

    void SelfTest();		// test whether kernel is working

  // public for convenience
    PostOfficeInput *postOfficeIn;
    PostOfficeOutput *postOfficeOut;

    int hostName;		// which machine is this

  private:
    double reliability;		// likelihood messages are dropped
};

#endif
