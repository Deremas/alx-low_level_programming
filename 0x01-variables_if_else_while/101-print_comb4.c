#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	for (n = '0'; n < '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
	for (a = n + 1; a <= '9'; a++)
	{
	if ((m != n) != a)
	{
		putchar(n);
		putchar(m);
		putchar(a);
		if (n == '7' && m == '8' && a == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

