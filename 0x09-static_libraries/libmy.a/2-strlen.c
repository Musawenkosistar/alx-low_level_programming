#include "main.h"
/**
 * _strlen - recur the length of a string
 * @s: a string
 * Return: a length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

