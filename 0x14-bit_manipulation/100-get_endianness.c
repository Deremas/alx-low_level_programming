#include "main.h"

/**
 * get_endianness - return the endianness value of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
