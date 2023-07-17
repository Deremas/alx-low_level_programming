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

	for (n = '0'; n <= '8'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
		putchar(n);
		putchar(m);

		if (n == '8')
		if (m == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
