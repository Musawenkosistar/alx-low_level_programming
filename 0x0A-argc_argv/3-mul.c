#include <stdio.h>
#include "main.h"

/**
 * _atoi - changes a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int f, d, n, len, f, digit;

	f = 0;
	j = 0;
	n = 0;
	len = 0;
	k = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (f < len && k == 0)
	{
		if (s[f] == '-')
			++j;

		if (s[f] >= '0' && s[f] <= '9')
		{
			digit = s[f] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			k = 1;
			if (s[f + 1] < '0' || s[f + 1] > '9')
				break;
			k = 0;
		}
		f++;
	}

	if (k == 0)
		return (0);

	return (n);
}

#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

