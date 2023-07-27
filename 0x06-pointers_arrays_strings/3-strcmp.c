#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input string
 * @s2: input string
 * Return: the value after comparing the two strings
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
