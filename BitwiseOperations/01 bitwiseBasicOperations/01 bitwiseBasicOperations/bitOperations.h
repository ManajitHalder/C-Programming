//
//  bitOperations.h
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 09/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#ifndef _1_bitwiseBasicOperations_countBits_h
#define _1_bitwiseBasicOperations_countBits_h

#include <stdio.h>

typedef enum
{
    false = 0,
    true = 1
}bool;

#define WORD_SIZE 16

int getWordSize();

unsigned int countNumberOfBitsSet(unsigned int number);
void printCountNumberOfBitsSet(unsigned int number);

void printbit(unsigned int number);

bool bitSetOrNot(unsigned int number, int pos);
void printBitSetOrNot(unsigned int number, int pos);

unsigned int setABit(unsigned int number, int pos);
void printSetABit(unsigned int number, int pos);

unsigned int unsetABit(unsigned int number, int pos);
void printUnsetABit(unsigned int number, int pos);

unsigned int flipABit(unsigned int number, int pos);
void printFlipABit(unsigned int number, int pos);

#endif
