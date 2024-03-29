#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - examine - string there are numbers
 * @str: array str
 *
 * Return: always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*examine if str there are numbers*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the project
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes passed the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> change string to int*/
			sum += str_to_int;
		}

		/*State if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

