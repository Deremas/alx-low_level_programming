#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - print an unsigned int in binary converted from integer
 * @n: input integer to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int printbinary = 1ul << 63;
	char c = '0';

	while (!(printbinary & n) && printbinary != 0)
		printbinary = printbinary >> 1;

	if (printbinary == 0)
		write(1, &c, 1);

	while (printbinary)
	{
		if (printbinary & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		printbinary = printbinary >> 1;
	}
}
