# include <stdio.h>
/**
 * main - program that prints lower case alphabets except q and e
 * Return: 0 always a success
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
			;
		else
			putchar(a);
	}
	putchar('\n');
	return (0);
}
