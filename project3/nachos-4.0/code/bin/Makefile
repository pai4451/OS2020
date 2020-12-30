# Use normal make for this Makefile
#
# Makefile for:
#	coff2noff -- converts a normal MIPS executable into a Nachos executable
#	disasm -- disassembles a normal MIPS executable 
#			(only works for little endian machines)
#
# Copyright (c) 1992-1996 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

include ../Makefile.dep
CC=gcc
CFLAGS=-I../lib -I../threads $(HOST)
LD=gcc

all: coff2noff 
#$(DISASM)

# converts a COFF file to Nachos object format
coff2noff: coff2noff.o
	$(LD) coff2noff.o -o coff2noff

# dis-assembles a COFF file
#disasm: out.o opstrings.o
#	$(LD) out.o opstrings.o -o disasm
