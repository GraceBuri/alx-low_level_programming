#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if ((n & (mask << ((sizeof(n) * 8) - 1 - i))) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
