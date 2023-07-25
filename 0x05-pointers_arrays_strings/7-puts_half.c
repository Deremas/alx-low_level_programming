#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * and print the second half of the string
 * @str: string to prints
 * Return: n
*/

void puts_half(char *str)

{
	int f;

	for (f = 0; str[f] != '\0'; f++)
		f++;

	for (f /= 2; str[f] != '\0'; f++)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
