#include <stdio.h>

/**
 * main - Entry point
 * Description - print lowercase letters alphabetically except e and q
 *
 * Return: 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
