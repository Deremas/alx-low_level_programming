#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: sring tobe searched
* @c: character to be located
*
* Return: if c is found - a pointer to the first occurrence
* if c is not found I NULL
*/

char *_strchr(char *s, char c)

{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
