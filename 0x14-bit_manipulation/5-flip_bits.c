#include "main.h"
/**
 * flip_bits - counts the number of bits to flip to reach another number
 * @n: first number to compare
 * @m: second number to compare with
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int bits_flipped = 0;

	xor_result = n ^ m;
	while (xor_result > 0)
	{
		if ((xor_result & 1) == 1)
			bits_flipped++;
		xor_result >>= 1;
	}
	return (bits_flipped);
}
