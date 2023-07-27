#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the buffer that storing the string copy
 * @src: the source string to be copied
* @n: the msaximum number of bytes to be copied from src
 * Return: pointer to the result of the string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
