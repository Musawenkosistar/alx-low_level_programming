#include "main.h"

/**
 * get_endianness - Examines if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *c = (char *) &f;

	return (*c);
}

