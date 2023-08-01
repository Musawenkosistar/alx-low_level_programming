#include "main.h"

/**
 * _islower - Examine for lowercase character
 * @c: the character to examine
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'f' && c <= 'z')
		return (1);
	else
		return (0);
}
