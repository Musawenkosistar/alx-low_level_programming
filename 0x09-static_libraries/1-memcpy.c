#include "main.h"

/**
 *_memcpy - An exercise that duplicates memory area
 *@dest: memory where is saved
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: duplicates memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int s = n;


	for (; f < s; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}

