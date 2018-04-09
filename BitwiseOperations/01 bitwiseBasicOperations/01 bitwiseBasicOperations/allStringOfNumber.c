//
//  allStringOfNumber.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 28/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "allStringOfNumber.h"

char bitString[50];

//Generates all bit strings of n bits
void binaryOfNBits(unsigned int num)
{
    if (num < 1)
    {
        printf("%s\t", bitString);
    }
    else
    {
        bitString[num-1] = '0';
        binaryOfNBits(num-1);
        bitString[num-1] = '1';
        binaryOfNBits(num-1);
    }
}

void printBinaryOfNBits(unsigned int num)
{
    printf("\nAll the bit strings of %d bits are:\n", num);
    binaryOfNBits(num);
    printf("\n");
}
