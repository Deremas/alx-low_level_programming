#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

/**
 * main - Entry point
 * @argc: number of argumets
 * @argv: an array of pointers of argumets
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == NULL) || (*op == '%' && num2 == '\0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(num1, num2));
	return (0);
}
