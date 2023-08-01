#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: sring to be evaluated
* @needle: substring to be checcked
*
* Return: if needle is found – pointer to the located substring
* if no needle is found - NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
