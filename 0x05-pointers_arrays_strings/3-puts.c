#include "main.h"

/**
 * _puts - fubction that prints string followed by new line, to stout
 * @str: string to print
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
