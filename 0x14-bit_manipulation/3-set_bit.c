#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number to operate on
 * @index: index at which to set the bit to 1
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
    if (index > sizeof(*n) * 8 - 1)
        return (-1);
    
    mask = 1;
    mask <<= index;
    
    *n |= mask;
    
    return (1);
}
