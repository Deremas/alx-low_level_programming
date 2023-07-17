#include <stdio.h>

/**
 * main - Entry point
 * Description - print all possible combination of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 56)
	{
		putchar(n);
		n++;
		putchar(',');
	}
		if (n == 57)
		{
		putchar(n);
		}

	putchar('\n');

	return (0);
}
