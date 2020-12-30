// netkernel.cc 
//	Initialization and cleanup routines for the version of the
//	Nachos kernel that supports network communication.
//
//	To test this out, run:
//		./nachos -m 0 & ; ./nachos -m 1 &
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "netkernel.h"
#include "post.h"

//----------------------------------------------------------------------
// NetKernel::NetKernel
// 	Interpret command line arguments in order to determine flags 
//	for the initialization (see also comments in main.cc)  
//
//   	-n sets the network reliability
//    	-m sets this machine's host id (needed for the network)
//----------------------------------------------------------------------

NetKernel::NetKernel(int argc, char **argv) : UserProgKernel(argc, argv)
{
    reliability = 1;            // network reliability
    hostName = -1;               // UNIX socket name

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-n") == 0) {
	    ASSERT(i + 1 < argc);   // next argument is float
	    reliability = atof(argv[i + 1]);
	    i++;
        } else if (strcmp(argv[i], "-m") == 0) {
	    ASSERT(i + 1 < argc);   // next argument is int
	    hostName = atoi(argv[i + 1]);
	    i++;
        } else if (strcmp(argv[i], "-u") == 0) {
            cout << "Partial usage: nachos [-n #] -m #\n";
	}
    }
    ASSERT(hostName != -1);	// need a unique host name for each nachos!
}

//----------------------------------------------------------------------
// NetKernel::Initialize
// 	Initialize Nachos global data structures.
//----------------------------------------------------------------------

void
NetKernel::Initialize()
{
    UserProgKernel::Initialize();	// init other kernel data structs

    postOfficeIn = new PostOfficeInput(10);
    postOfficeOut = new PostOfficeOutput(reliability, 10);
}

//----------------------------------------------------------------------
// NetKernel::~NetKernel
// 	Nachos is halting.  De-allocate global data structures.
//	Automatically calls destructor on base class.
//----------------------------------------------------------------------

NetKernel::~NetKernel()
{
    delete postOfficeIn;
    delete postOfficeOut;
}

//----------------------------------------------------------------------
// NetKernel::Run
// 	Run the Nachos kernel.  For now, just halt. 
//----------------------------------------------------------------------

void
NetKernel::Run()
{
    kernel->interrupt->Halt();
}

//----------------------------------------------------------------------
// NetKernel::SelfTest
//      Test whether this module is working. On machines #0 and #1, do:
//
//	1. send a message to the other machine at mail box #0
//	2. wait for the other machine's message to arrive (in our mailbox #0)
//	3. send an acknowledgment for the other machine's message
//	4. wait for an acknowledgement from the other machine to our 
//	    original message
//----------------------------------------------------------------------

void
NetKernel::SelfTest() {
    UserProgKernel::SelfTest();		// this requires each nachos
					// kernel to have its own window!

    if (hostName == 0 || hostName == 1) {
    	// if we're machine 1, send to 0 and vice versa
    	int farHost = (hostName == 0 ? 1 : 0); 
    	PacketHeader outPktHdr, inPktHdr;
    	MailHeader outMailHdr, inMailHdr;
    	char *data = "Hello there!";
    	char *ack = "Got it!";
    	char buffer[MaxMailSize];

    	// construct packet, mail header for original message
    	// To: destination machine, mailbox 0
    	// From: our machine, reply to: mailbox 1
    	outPktHdr.to = farHost;		
    	outMailHdr.to = 0;
    	outMailHdr.from = 1;
    	outMailHdr.length = strlen(data) + 1;

    	// Send the first message
    	postOfficeOut->Send(outPktHdr, outMailHdr, data); 

    	// Wait for the first message from the other machine
    	postOfficeIn->Receive(0, &inPktHdr, &inMailHdr, buffer);
    	cout << "Got: " << buffer << " : from " << inPktHdr.from << ", box " 
						<< inMailHdr.from << "\n";
    	cout.flush();

    	// Send acknowledgement to the other machine (using "reply to" mailbox
    	// in the message that just arrived
    	outPktHdr.to = inPktHdr.from;
    	outMailHdr.to = inMailHdr.from;
    	outMailHdr.length = strlen(ack) + 1;
    	postOfficeOut->Send(outPktHdr, outMailHdr, ack); 

    	// Wait for the ack from the other machine to the first message we sent.
    	postOfficeIn->Receive(1, &inPktHdr, &inMailHdr, buffer);
    	cout << "Got: " << buffer << " : from " << inPktHdr.from << ", box " 
						<< inMailHdr.from << "\n";
    	cout.flush();
    }

    // Then we're done!
}
