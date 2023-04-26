#include "main.h"

/**
 * binary_to_uint - function  to convert binary to unsigned int.
 * @b: pointer to a string with the binary number
 *
 * Return: unsigned int of binary number, or 0 when error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i;

	if (!b)
		return (0);

	for ( i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bin <<= 1;
		if (b[i] == '1')
			bin += 1;
	}

	return bin;
}
