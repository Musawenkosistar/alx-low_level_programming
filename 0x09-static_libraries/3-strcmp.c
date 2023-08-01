#include "main.h"

/**
 * _strcmp - Compare different string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[f] - s2[f]
 */
int _strcmp(char *s1, char *s2)
{
	int f;

	for (f = 0; s1[f] != '\0' && s2[f] != '\0'; f++)
	{
		if (s1[f] != s2[f])
			return (s1[f] - s2[f]);
	}
	return (0);
}
