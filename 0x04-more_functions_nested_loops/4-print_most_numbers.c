#include "main.h"
/**
 * print_most_numbers - a function that prints numbers to the screen
 * Return: 0 always a success
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
