#include <stdio.h>

/**
 * main - Entry point
 * Desscription - print possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	for (m = 48; m <= 57; m++)
	{
		for n < m;
		    (
		putchar(n);
		putchar(m));

		if (n != 57)
		if (m != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
