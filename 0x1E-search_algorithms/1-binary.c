#include "search_algos.h"
/**
 * binary_search - search value from sorted array
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to look for
 * Return: index of value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, first, last;

	if (array == NULL)
		return (-1);

	for (first = 0, last = size - 1; last >= first;)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = first + (last - first) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			last = i - 1;
		else
			first = i + 1;
	}
	return (-1);
}
