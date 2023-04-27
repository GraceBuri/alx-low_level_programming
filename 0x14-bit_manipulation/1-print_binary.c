#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base to the exponent
 * @power: power to the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned long int result = 1;

	for (i = 0; i < power; i++) {
		result *= base;
	}
	return result;
}

/**
 * print_binary - prints number in binary
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (divisor != 0) {
		if ((n & divisor) == divisor) {
			flag = 1;
			_putchar('1');
		} else if (flag == 1 || divisor == 1) {
			_putchar('0');
		}
		divisor >>= 1;
	}
}
