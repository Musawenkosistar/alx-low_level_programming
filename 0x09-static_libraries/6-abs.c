#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer
 * @n: the int to examine
 *
 * Return: the absolute value of int
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
