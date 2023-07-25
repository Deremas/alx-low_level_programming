#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer to swap
 * @b: imteger to swap
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
