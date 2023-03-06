# include "main.h"
# include <stdio.h>
/**
 * _strpbrk - a function that prints a set of bytes
 * @s:parameter for the function
 * @accept: parameter for the functin
 * Return: 9 always a success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}

	}
	return (NULL);
}
