# include "main.h"
/**
 * print_numbers - Prints numbers from 0 - 9
 * Return: 0 always a success
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
