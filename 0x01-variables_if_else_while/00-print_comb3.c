#include <stdio.h>

/**
 * main - Entry point
 * Description - prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= '8'; m++)
	{
	for (n = m + 1; n <= '9'; n++)
	{
		if (n < m)
		putchar(m);
		putchar(n);

		if (m == '8')
		if (n == '9')
		continue;
	}
	}
	putchar('\n');
	return (0);
}
