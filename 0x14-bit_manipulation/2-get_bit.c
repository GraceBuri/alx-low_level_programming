#include"main.h"

/**
 * get_bit -a function that returns the value of a bit at a given index.
 * @n: number to operate on
 * @index: index of a bit
 * Return: value of bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index > (sizeof(unsigned long int) * 8 - 1))
    {
        return (-1);
    }
    else
    {
        unsigned long int div,h;
        div = 1;
        div = div << index;
        h = n & div;
        if (h == div)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
}
