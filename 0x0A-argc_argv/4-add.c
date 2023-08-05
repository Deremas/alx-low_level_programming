#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_numb - check the number is string
 * @str: string
 *
 * Return: 0
 */

int check_numb(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - function that add positive numbers
 * @argc: number of argumrnts
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_numb(argv[count]))
		{
			str_to_int = atoi(argv[count]);

			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
