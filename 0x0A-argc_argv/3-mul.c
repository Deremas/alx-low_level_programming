#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple two numbers
 * @argc: number of arguments
 * @argv: array of argumets
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 3)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
