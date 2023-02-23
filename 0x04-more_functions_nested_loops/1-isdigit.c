# include "main.h"
/**
 * _isdigit - function that checks whether a number is between 0 and 9
 * @c: parameter for the function _isdigit
 * Return: 0 as a failure and 1 as a success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
