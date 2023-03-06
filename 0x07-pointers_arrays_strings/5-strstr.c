# include "main.h"
# include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input for the function
 * @needle: input for the function
 * Return: 0 always a success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
