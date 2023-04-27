#include "main.h"

/**
 * flip_bits - a function that counts the number of bits to change
 * to get from one number to another
 * @n: initial number
 * @m: resultant number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int t, i = 0;
    unsigned long int ini;
    unsigned long int res = n ^ m;

    for (t = 63; t >= 0; t--)
    {
        ini = res >> t;
        if (ini & 1)
            i++;
    }

    return (i);
}
