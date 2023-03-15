#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; ++i)
	{
		j = 0;
		while (argv[i][j] != '\0')
	{
		if (!isdigit(*(argv[i] + j)))
	{
		printf("Error\n");
			return (1);
	}
	j++;
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
