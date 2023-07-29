#include "main.h"
/**
 *_memcpy - an exercise that copies memory area
 *@dest: memory where is saved
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int s = n;


	for (; a < s; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

