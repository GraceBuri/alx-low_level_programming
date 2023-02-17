#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always a success
 */
int main(void)
{
	/*print alphabets in lower case then in uppercase*/
	/*use putchar*/
	char u;
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);

}
