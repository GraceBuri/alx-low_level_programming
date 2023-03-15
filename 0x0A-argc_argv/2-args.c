# include "main.h"
# include <stdio.h>
/**
 * main - entry point
 * @argc: parameter for the function
 * @argv: parameter for the function
 * Return: 0 always a success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);
	return (0);

}
