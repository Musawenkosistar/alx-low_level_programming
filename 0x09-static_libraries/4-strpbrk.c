#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int f, g;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (s[f] == accept[g])
				return (s + f);
		}
	}

	return (NULL);
}
