//
//  powerOfTwo.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 20/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "powerOfTwo.h"

bool isPowerOfTwo(unsigned int num)
{
    
    /*
     Suppose the number is power of two. For example 8 (0000 1000)
     Now subtract 1 from 8. 8 - 1 = 7 (0000 1000 - 0000 0001 = 0000 0111)
     Now if you bitwise AND of 8 and 7 you will get 0 (0000 1000 & 0000 0111 = 0000 0000)
     
     And if the number is not power of two. For example 10 (0000 1010)
     10 & 9 (0000 1010 & 0000 10001 = 0000 1000) which is not 0.
     */
    return !(num & (num -1));
}

void printIsPowerOfTwo(unsigned int num)
{
    if (isPowerOfTwo(num))
        printf("%d is power of 2\n", num);
    else
        printf("%d is not power of 2\n", num);
}
