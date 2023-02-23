# include "main.h"
/**
 * more_numbers - a function that prints 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	char y;

	for (n = 0; n <= 10; n++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				int z = y;
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
				printf("%d", y);
		}
		_putchar('\n');
	}
}
