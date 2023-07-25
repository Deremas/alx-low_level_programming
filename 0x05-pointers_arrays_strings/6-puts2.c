#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * and starting with the first character, followed by a new line
 * @str: string that prints
 * Return: every character of a string
*/

void puts2(char *str)

{
	int longi = 0;
	int p = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		longi++;
	}

	p = longi - 1;

	for (k = 0; k <= p; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
