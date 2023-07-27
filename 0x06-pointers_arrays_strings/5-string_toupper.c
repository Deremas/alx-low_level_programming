#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @str: input value
 * Return: uppercase letters
 */

char *string_toupper(char *str)
{
	int a;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);

}
