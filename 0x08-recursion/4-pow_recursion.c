#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to power y
 * @x: input number
 * @y: input number as a power
 *
 * Return: -1, if y is lower than 0
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
