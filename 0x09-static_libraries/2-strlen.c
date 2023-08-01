#include "main.h"

/**
 * _strlen - recur the length of a string
 * @s: a string
 * Return: a length
 */
int _strlen(char *s)
{
	int f = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[f++];
	}
	return (sum);
}
