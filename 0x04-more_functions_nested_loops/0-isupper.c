# include "main.h"
/**
 * _isupper - function that checks if a character is uppercase
 * @c: arguument for the function is upper
 * Return: 0 failure otherwise 1 is a success
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
