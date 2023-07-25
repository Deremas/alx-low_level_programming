#include "main.h"

/**
 * _strlen - returns the length of the string we want
 * @s: string
 * Return: length of the string
*/

int _strlen(char *s)
{
	int longj = 0;

	while (*s != '\0')
	{
		longj++;
		s++;
	}

	return (longj);
}
