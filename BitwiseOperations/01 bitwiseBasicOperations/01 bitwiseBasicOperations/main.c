//
//  main.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 09/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "bitOperations.h"
#include "swapTwoNumbers.h"
#include "powerOfTwo.h"
#include "reverseBitsOfNumber.h"
#include "findPositionOfOnlySetBit.h"
#include "allStringOfNumber.h"

int main(int argc, const char * argv[])
{
    unsigned int number = 11;
    int pos = 3;
    int setPos = 1;
    int unsetPos = 1;
    
    // Print Number bits set in a number
    printCountNumberOfBitsSet(number);
    
    // Print bits in a number
    printbit(number);
    
    // Print Bit set or not
    printBitSetOrNot(number, pos);
    
    // Print number after setting a bit in number
    printSetABit(number, setPos);
    
    // Print number after un-setting a bit in number
    printUnsetABit(number, unsetPos);
    
    // Print number after flipping a bit
    printFlipABit(number, pos);
    
    
    // Print numbers before and after swapping two unsigned integer numbers using bitwise operator
    printSwapNumbers(10, 15);
    
    
    // Print whether a number is power of 2 or not
    printf("\n");
    printIsPowerOfTwo(8);
    printIsPowerOfTwo(17);
    
    // Print reverse of bits in a number
    printReverseNum(8);
    
    // Print the position of only set bit in a number
    printBitPosition(16);
    
    // Print for a given no n, finds a number p which is greater than or equal to n and is a power of 2.
    
    
    // Print all the strings of n bits.
    printBinaryOfNBits(2);
    
    return 0;
}

