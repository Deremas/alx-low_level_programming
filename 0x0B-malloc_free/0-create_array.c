#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: eize of an array
 * @c: character to assign
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0 && str == NULL)
		return (0);

	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
