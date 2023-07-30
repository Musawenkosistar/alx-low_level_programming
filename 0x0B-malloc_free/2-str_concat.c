#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two numbers
 * @s1: char 1
 * @s2: char 2
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int f = 0, i = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[f])
	{
		f++;
	}
	while (s2[i])
	{
		i++;
	}
	k = f + i + 1;
	res = malloc(k * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (cont = 0; cont < f; cont++)
	{
		res[cont] = s1[cont];
	}
	for (cont = 0; cont <= i; cont++)
	{
		res[cont + f] = s2[cont];
	}
	return (res);
}
