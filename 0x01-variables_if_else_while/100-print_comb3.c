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
		if (n < m)
		{
		putchar(n);
		putchar(m);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
