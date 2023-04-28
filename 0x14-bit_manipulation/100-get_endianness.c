#include "main.h"

/**
* get_endianness - Check the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int num = 1;
char *ptr = (char *)&num;

if (*ptr == 1)
	return (1);
else
	return (0);
}
