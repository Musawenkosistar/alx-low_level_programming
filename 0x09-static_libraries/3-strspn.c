#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int n;


	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				j++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
