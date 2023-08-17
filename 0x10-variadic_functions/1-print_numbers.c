#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable numbers of integers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list dr;

	unsigned int d;

	va_start(dr, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(dr, int));

	if (d != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(dr);
}

