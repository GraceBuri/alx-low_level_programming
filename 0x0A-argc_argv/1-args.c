# include <stdio.h>
# include "main.h"
/**
 * main - Entry point
 * @argc: parameter for the function
 * @argv: parameter fir the function
 * Return: 0 always a success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
