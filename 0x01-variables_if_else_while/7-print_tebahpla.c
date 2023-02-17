# include <stdio.h>
/**
 *main - function that prints lowercase alphabets in reverse
 *Return: 0 always a success
 */
int main(void)
{
	int o;

	for (o = 122; o > 96; o--)
		putchar(o);
	putchar('\n');
	return (0);

}
