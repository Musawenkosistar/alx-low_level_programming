#include "main.h"
		
/**
 * _isalpha - examines for alphabetic character
 * @c: the character to be examined
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
