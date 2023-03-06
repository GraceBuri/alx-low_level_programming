# include "main.h"
/**
 * _memcpy - a function that copies values of src to dest
 * @dest: the string that recieves a copy of the source
 * @n: size of src in bytes
 * @src: the string that gives its values to dest
 * Return: Return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
