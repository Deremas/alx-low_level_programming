#include "main.h"

/**
* _strpbrk - function that searches a string for any set of bytes
* @s: sring to be searched
* @accept: set of bytes to be searched for
*
* Return: if set is matched – pointer to matched bytes
* if no such byte is found - NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
