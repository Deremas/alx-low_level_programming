#include <stdio.h>

/**
 * main - Entry point
 * Description - print 0 to 9 with putchar command
 *
 * Return: 0
 */

int main(void)

{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
