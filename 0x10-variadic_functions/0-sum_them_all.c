#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the amount of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, sum = 0;

	va_start(ap, n);

	for (f = 0; a < n; f++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
