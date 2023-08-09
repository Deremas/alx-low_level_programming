#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 *
 * Return: a pointer to the duplicated string or NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	int a = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + i);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
	}

	s[a] = '\0';
	return (s);
}
