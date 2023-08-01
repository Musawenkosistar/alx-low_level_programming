#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f, g, value, check;

	value = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		check = 0;

		for (g = 0; accept[g] != '\0'; g++)
		{
			if (accept[g] == s[f])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}

	return (value);
}
