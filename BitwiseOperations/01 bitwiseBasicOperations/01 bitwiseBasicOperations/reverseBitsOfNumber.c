//
//  reverseBitsOfNumber.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 26/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "reverseBitsOfNumber.h"

unsigned int reverseBitsExample1(unsigned int num)
{
    int i = sizeof(unsigned int) * 8 - 1;
    
    static unsigned int reverseNum = 0;
    
    while (i >= 0 && num)
    {
        if (num & 1)
        {
            reverseNum |= (1<<i);
        }
        num >>= 1;
        i--;
    }
    return reverseNum;
}

unsigned int reverseBitsExample2(unsigned int num)
{
    int bitSize = sizeof(unsigned int) * 8;
    static unsigned int reverseNum = 0;
    
    for (int i=0; i<bitSize; i++)
    {
        if (num & (1 << i))
        {
            reverseNum |= (1 << (bitSize - i));
        }
    }
    return reverseNum;
}

void printReverseNum(unsigned int num)
{
    unsigned int number = num;
    printf("reverseBitsExample1: Reverse of bits of number %d is %d\n", number, reverseBitsExample1(num));
    printbit(number);
    printbit(reverseBitsExample1(num));
    
    printf("reverseBitsExample2: Reverse of bits of number %d is %d\n", number, reverseBitsExample2(num));
    printbit(number);
    printbit(reverseBitsExample2(num));
}
