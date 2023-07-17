#include <stdio.h>

/**
 * main - Entry point
 * Description - print possibl combination of 3 digit numbers
 *
 * Return: 0
 */


int main(void)
{
	int n;
	int m;
	int a;

	for (n = 48; n <= 57; n++)
	for (m = 48; m <= 57; m++)
	for (a = 48; a <= 57; a++)
	{
		for (n < m && m < a;
		{
		putchar(n);
		putchar(m);
		putchar(a);
		}
		if (n == 57 && m == 57 && a == 57)
		{
			continue;
		}
		}
		putchar('\n');
		return (0);
}

