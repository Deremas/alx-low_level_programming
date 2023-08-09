#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes the character c to stdout
 * @c: character to be written
 *
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
