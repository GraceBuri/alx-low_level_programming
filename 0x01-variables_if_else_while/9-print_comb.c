# include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 * Return: 0 indicates success
 */
int main(void)
{
	int c;
	for (c = 48; c < 57; c++)
		putchar(c);
		if ( c==57 )
			continue;
		putchar(',');
		putchar('.');

	putchar('\n');
	return (0);
}
