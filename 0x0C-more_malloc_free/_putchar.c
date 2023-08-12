#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes character tp stdout
 * @c: character
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
