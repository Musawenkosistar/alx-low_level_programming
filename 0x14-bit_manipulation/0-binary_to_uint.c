#include "main.h"

/**
 * binary_to_uint - changes a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the changed number
 */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[f] - '0');
	}

	return (dec_val);
}
