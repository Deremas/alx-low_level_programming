#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line
 * @s: string to print
 */

void print_rev(char *s)

{
	int longj = 0;
	int l;

	while (*s != '\0')
	{
		longj++;
		s++;
	}
	s--;
	for (l = longj; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
