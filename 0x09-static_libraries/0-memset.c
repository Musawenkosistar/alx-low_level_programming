#include "main.h"

/**
 * _memset - Fill a block of recall with a specific use
 * @s: starting address of memory to be filled
 * @b: the desired use
 * @n: number of bytes to be changed
 *
 * Return: Altered array with new use for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
		s[f] = b;
	return (s);
}
