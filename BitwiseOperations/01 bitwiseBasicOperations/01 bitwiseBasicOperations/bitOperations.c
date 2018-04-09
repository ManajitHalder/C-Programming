//
//  bitOperations.c
//  01 bitwiseBasicOperations
//
//  Created by Manajit Halder on 09/02/14.
//  Copyright (c) 2014 Manajit-Halder. All rights reserved.
//

#include "bitOperations.h"

/**
 *
 * \fn getWordSize
 *
 * \brief Gets the word size of a machine
 *
 * \param none
 *
 * \return int [OUT] word size
 *
 * \author Manajit Halder
 *
 */

int getWordSize()
{
    return sizeof(unsigned int) * 8;
}

/**
 *
 * \fn calculateNumberOfBitsSet
 *
 * \brief Counts number of bits set in a unsigned number
 *
 * \param unsigned int number [IN]
 *
 * \return count of bits set
 *
 * \author Manajit Halder
 *
 */
unsigned int countNumberOfBitsSet(unsigned int number)
{
    unsigned int count = 0;
    
    for (int i=0; i<getWordSize(); i++)
    {
        if (number & 1 << i)
            count++;
    }
    return count;
}

/**
 *
 * \fn printbit
 *
 * \brief Prints bits in a number
 *
 * \param unsigned int number [IN]
 *
 * \return void
 *
 * \author Manajit Halder
 *
 */
void printbit(unsigned int number)
{
    unsigned long mask = 0X100000000;
    
    while( mask )
    {
        if( (mask & number) )
            putchar( '1' ) ;
        else
            putchar( '0' ) ;
        
        mask = mask >> 1 ;
    }
    printf("\n");
}

/**
 *
 * \fn printCountNumberOfBitsSet
 *
 * \brief Prints number of bits set in an unsigned number
 *
 * \param unsigned int number [IN]
 *
 * \return count of bits set
 *
 * \author Manajit Halder
 *
 */
void printCountNumberOfBitsSet(unsigned int number)
{
    printf("Number of bits set in %d is %d\n", number, countNumberOfBitsSet(number));
}

/**
 *
 * \fn bitSetOrNot
 *
 * \brief Finds whether a particular bit at particular position is set or not
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return bool [OUT] bit set or not
 *
 * \author Manajit Halder
 *
 */
bool bitSetOrNot(unsigned int number, int pos)
{
    return (number & 1 << pos);
}

/**
 *
 * \fn printBitSetOrNot
 *
 * \brief Prints whether a particular bit at particular position is set or not
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return void
 *
 * \author Manajit Halder
 *
 */
void printBitSetOrNot(unsigned int number, int pos)
{
    if (bitSetOrNot(number, pos))
        printf("Bit %d in %d is set\n", pos, number);
    else
        printf("Bit %d in %d is unset\n", pos, number);
}

/**
 *
 * \fn setABit
 *
 * \brief Sets a particular bit to 1
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return number with particular bit set to 1
 *
 * \author Manajit Halder
 *
 */
unsigned int setABit(unsigned int number, int pos)
{
    return (number | 1 << pos);
}

/**
 *
 * \fn printSetABit
 *
 * \brief Print the number with particulart bit at position pos set to 1
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return prints the number with bit set to 1 at particular position
 *
 * \author Manajit Halder
 *
 */
void printSetABit(unsigned int number, int pos)
{
    printf("Number generated after setting bit at position %d in number %d is %d\n", pos, number, setABit(number, pos));
}

/**
 *
 * \fn unsetABit
 *
 * \brief Unsets a particular bit to 0
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return number with particular bit set to 0
 *
 * \author Manajit Halder
 *
 */
unsigned int unsetABit(unsigned int number, int pos)
{
    return (number & ~(1 << pos));
    /*
     For example if number is 11. In binary 00001011
     And pos is 3.
     
     1 << pos will be 00001000
     ~(1 << pos) will be 11110111
     number & ~(1 << pos) will be 00000011 (00001011 & 11110111)
     */
}

/**
 *
 * \fn printUnsetABit
 *
 * \brief Print the number with particulart bit at position pos set to 0
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return prints the number with bit set to 0 at particular position
 *
 * \author Manajit Halder
 *
 */
void printUnsetABit(unsigned int number, int pos)
{
    printf("Number generated after un-setting bit at position %d in number %d is %d\n", pos, number, unsetABit(number, pos));
}

/**
 *
 * \fn flipABit
 *
 * \brief Flips a particular bit
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return number with particular bit flipped
 *
 * \author Manajit Halder
 *
 */
unsigned int flipABit(unsigned int number, int pos)
{
    return (number ^ (1 << pos));
    /*
     For example if number is 11. In binary 00001011
     And pos is 3.
     
     1 << pos will be 00001000
     number ^ (1 << pos) will be 00000011 (00001011 ^ 00001000)
     */
}

/**
 *
 * \fn printFlipABit
 *
 * \brief Print the number with particulart bit at position pos flipped
 *
 * \param unsigned int number [IN] the number
 *
 * \param int pos [IN] the position of the bit
 *
 * \return prints the number with bit set flipped at particular position pos
 *
 * \author Manajit Halder
 *
 */
void printFlipABit(unsigned int number, int pos)
{
    printf("Number generated after flipping bit at position %d in number %d is %d\n", pos, number, flipABit(number, pos));
}
