#include "search_algos.h"

/**
 * linear_search -  a function that searches for a value in an array of
 * .....integers using the Linear search algorithm
 * @array: the array to search in.
 * @size: the length of the array.
 * @value: the value to look for.
 *
 * Return: the first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (f = 0; (f < size) && (array); f++)
	{
		if (*(array + f) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)f, *(array + f));
			return (f);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)f, *(array + f));
		}
	}
	return (-1);
}
