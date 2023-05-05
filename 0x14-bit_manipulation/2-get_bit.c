#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index.
 * @n: Integer value of binary in base 10.
 * @index: Index you want to read the bit value.
 *
 * Return: Bit at a specific index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitShift;

if (index > 32)
return (-1);

bitShift = (number >> index) & 1;
return (bitShift);
}
