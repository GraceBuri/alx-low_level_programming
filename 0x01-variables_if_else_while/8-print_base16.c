# include <stdio.h>
/**
 * main - this file prints all numbers of base 16 in lowercase
 * Return: 0 always a success
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	putchar(n);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);

}
