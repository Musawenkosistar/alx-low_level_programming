#include "main.h"
 /**
 * _strcat - focuses on two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int j;


	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		a++;
		j++;
	}		


	dest[a] = '\0';
	return (dest);
}

