//
//  findPositionOfOnlySetBit.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 27/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "findPositionOfOnlySetBit.h"

int bitPostionOfOnlySetBit(unsigned int num)
{
    static int setPos = 0;
    //Check if the number is a power of 2.
    if (isPowerOfTwo(num))
    {
        while (num)
        {
            setPos++;
            num >>= 1;
        }
    }
    else
        return -1;
    
    return setPos;
}

void printBitPosition(unsigned int num)
{
    printf("\nBit Position of only set bit is %d\n", bitPostionOfOnlySetBit(num));
}
