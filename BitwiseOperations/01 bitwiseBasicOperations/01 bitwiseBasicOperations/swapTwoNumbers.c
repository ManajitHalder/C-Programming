//
//  swapTwoNumbers.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 20/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "swapTwoNumbers.h"

/**
 *
 * \fn swapNumbers
 *
 * \brief Swaps two unsigned integer numbers without using a temporary variable using bitwise XOR operator.
 *
 * \param unsigned int num1 [IN]: first number
 * \param unsigned int num2 [IN]: second number
 *
 * \return void
 *
 * \author Manajit Halder
 *
 */
void swapNumbers(unsigned int *num1, unsigned int *num2)
{
    /*
     Suppose the numbers are num1 = 6 and num2 = 9.
     After swappint the numbers should be num1 = 9 and num2 = 6.
     
     Apply bitwise XOR operator:
     
     num1 = num1 ^ num2. 0000 0110 ^ 0000 1001 = 0000 1111 = 15
     num2 = num1 ^ num2. 0000 1111 ^ 0000 1001 = 0000 0110 = 6
     num1 = num1 ^ num2. 0000 1111 ^ 0000 0110 = 0000 1001 = 9
     **/
    if (num1 == num2)
        return;
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

/**
 *
 * \fn swapNumbers
 *
 * \brief Prints numbers before and after swapping them using bitwise operator and without using temporary variable.
 *
 * \param unsigned int a [IN]: first number
 * \param unsigned int b [IN]: second number
 *
 * \return void
 *
 * \author Manajit Halder
 *
 */
void printSwapNumbers(unsigned int num1, unsigned int num2)
{
    printf("\nNumbers before swap: %d %d\n", num1, num2);
    swapNumbers(&num1, &num2);
    printf("Numbers after swap: %d %d\n", num1, num2);
}


