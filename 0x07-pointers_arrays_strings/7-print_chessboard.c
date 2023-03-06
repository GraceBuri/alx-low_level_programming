# include "main.h"
# include <stdio.h>
/**
 * print_chessboard - fuction that prints te chessboard
 * @a: array parameter for the function
 * Return: 0 always a success
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
