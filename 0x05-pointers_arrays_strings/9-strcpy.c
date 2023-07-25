#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy to
 * @src:  copy from
 * Return: string
*/

char *_strcpy(char *dest, char *src)

{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < n; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';
		return (dest);
}
