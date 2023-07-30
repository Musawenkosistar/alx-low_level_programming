#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The project is to create an array of chars
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *res;
	int i = 0, a;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (a = 0; a <= i; a++)
	{
		res[a] = str[a];
	}
	return (res);
}
