#include <stdlib.h>
#include "main.h"

/**
 * argstostr - execution concatenates all the arguments of your project.
 * @ac: pointer
 * @av: altura
 *
 * Return: Result
 */

char *argstostr(int ac, char **av)
{
	int k = 0, n = 0, cont = 0;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (k < ac)
	{
		new = av[k];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		k++;
	}
	result = malloc(cont + 1);
	k = 0;
	while (k < ac)
	{
		new = av[k];
		while (*new)
		{
			result[n] = *new;
			new++;
			n++;
		}
		result[n] = '\n';
		n++;
		k++;
	}
	result[cont + 1] = '\0';
	return (result);
}
