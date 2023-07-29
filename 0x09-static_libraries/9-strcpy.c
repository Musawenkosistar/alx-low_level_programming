#include "main.h"
		
/**
 * char *_strcpy - a function that duplicates the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int p = 0;


	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; p < k ; p++)
	{
		dest[p] = src[p];
	}
	dest[k] = '\0';
	return (dest);
}

