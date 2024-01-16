#include "search_algos.h"

/**
 * print_array - prints the contents of an array.
 * @array: the source of the array to print.
 * @l: the left index of the array.
 * @r: the right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t f;

	if (array)
	{
		printf("Searching in array: ");
		for (f = l; f < l + (r - l + 1); f++)
			printf("%d%s", *(array + f), f < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - searches a value in a sorted array using \
 * a binary search.
 * @array: the array to search in.
 * @l: the left index of the array.
 * @r: the right index of the array.
 * @value: the value to look for.
 *
 * Return: the first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t w;

	if (!array)
		return (-1);
	print_array(array, l, r);
	w = l + ((r - l) / 2);
	if (l == r)
		return (*(array + w) == value ? (int)w : -1);
	if (value < *(array + w))
		return (binary_search_index(array, l, w - 1, value));
	else if (value == *(array + w))
		return ((int)w);
	else
		return (binary_search_index(array, w + 1, r, value));
}

/**
 * binary_search - searches a value in a sorted array using a binary search.
 * @array: the array to search in.
 * @size: the length of the array.
 * @value: the value to look for.
 *
 * Return: the index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
