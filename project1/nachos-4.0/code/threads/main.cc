// main.cc 
//	Driver code to initialize, selftest, and run the 
//	operating system kernel.  
//
// Usage: nachos -u -z -d <debugflags> ...
//   -u prints entire set of legal flags
//   -z prints copyright string
//   -d causes certain debugging messages to be printed (cf. debug.h)
//
//  NOTE: Other flags are defined for each assignment, and
//  incorrect flag usage is not caught.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#define MAIN
#include "copyright.h"
#undef MAIN

#include "main.h"

// global variables
KernelType *kernel;
Debug *debug;


//----------------------------------------------------------------------
// Cleanup
//	Delete kernel data structures; called when user hits "ctl-C".
//----------------------------------------------------------------------

static void 
Cleanup(int x) 
{     
    cerr << "\nCleaning up after signal " << x << "\n";
    delete kernel; 
}


//----------------------------------------------------------------------
// main
// 	Bootstrap the operating system kernel.  
//	
//	Initialize kernel data structures
//	Call selftest procedure
//	Run the kernel
//
//	"argc" is the number of command line arguments (including the name
//		of the command) -- ex: "nachos -d +" -> argc = 3 
//	"argv" is an array of strings, one for each command line argument
//		ex: "nachos -d +" -> argv = {"nachos", "-d", "+"}
//----------------------------------------------------------------------

int
main(int argc, char **argv)
{
    int i;
    char *debugArg = "";

    // before anything else, initialize the debugging system
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-d") == 0) {
	    ASSERT(i + 1 < argc);   // next argument is debug string
            debugArg = argv[i + 1];
	    i++;
	} else if (strcmp(argv[i], "-u") == 0) {
            cout << "Partial usage: nachos [-z -d debugFlags]\n";
	} else if (strcmp(argv[i], "-z") == 0) {
            cout << copyright;
	}

    }
    debug = new Debug(debugArg);
    
    DEBUG(dbgThread, "Entering main");

    kernel = new KernelType(argc, argv);
    kernel->Initialize();
    
    CallOnUserAbort(Cleanup);		// if user hits ctl-C

    kernel->SelfTest();
    kernel->Run();
    
    return 0;
}

