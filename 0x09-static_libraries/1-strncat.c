#include "main.h"

/**
 * _strncat - Focus on two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f;
	int i;


	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[f] = src[i];
	f++;
	i++;
	}
	dest[f] = '\0';
	return (dest);
}

