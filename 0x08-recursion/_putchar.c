#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character to stdout
 * @c: character to print
 *
 * Return: on success 1
 * on error, -i is returned, and errno is set authomatically
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
