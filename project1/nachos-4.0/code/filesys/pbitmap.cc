// pbitmap.c 
//	Routines to manage a persistent bitmap -- a bitmap that is
//	stored on disk.
//
// Copyright (c) 1992,1993,1995 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "pbitmap.h"

//----------------------------------------------------------------------
// PersistBitMap::PersistBitMap
// 	Initialize a bitmap with "numItems" bits, so that every bit is clear.
//	it can be added somewhere on a list.
//
//	"numItems" is the number of bits in the bitmap.
//----------------------------------------------------------------------

PersistBitMap::PersistBitMap(int numItems):BitMap(numItems) 
{ 
}

PersistBitMap::PersistBitMap(OpenFile *file, int numItems):BitMap(numItems)
{
    // map has already been initialized by the BitMap constructor,
    // but we will just overwrite that with the contents of the
    // map found in the file
    file->ReadAt((char *)map, numWords * sizeof(unsigned), 0);
}
//----------------------------------------------------------------------
// BitMap::~BitMap
// 	De-allocate a bitmap.
//----------------------------------------------------------------------

PersistBitMap::~PersistBitMap()
{ 
}


//----------------------------------------------------------------------
// BitMap::ToCanonical
// 	Initialize the contents of a bitmap from a Nachos file.
//
//	"file" is the place to read the bitmap from
//----------------------------------------------------------------------

void
PersistBitMap::FetchFrom(OpenFile *file) 
{
    file->ReadAt((char *)map, numWords * sizeof(unsigned), 0);
}

//----------------------------------------------------------------------
// BitMap::WriteBack
// 	Store the contents of a bitmap to a Nachos file.
//
//	"file" is the place to write the bitmap to
//----------------------------------------------------------------------

void
PersistBitMap::WriteBack(OpenFile *file)
{
   file->WriteAt((char *)map, numWords * sizeof(unsigned), 0);
}
