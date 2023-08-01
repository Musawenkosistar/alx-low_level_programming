#include "main.h"

/**
 * _strncpy -duplicate a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
		if (f < n)
			dest[f] = src[f];
	while (f < n)
		dest[f++] = '\0';

	return (dest);
}
