#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input value
 * @index: index
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int l;

	if (index > 63)
		return (-1);

	l = 1 << index;
	return ((n & l) > 0);
}
