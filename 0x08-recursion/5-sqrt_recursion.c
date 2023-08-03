#include "main.h"

/**
 * actual_sqrt_recursion - function to find actual square root of number
 * @x: number to calculate its square root
 * @i: iterator
 * Return: actual square root of n
 */

int actual_sqrt_recursion(int x, int i)
{
	if (i * i > x)
	{
		return (-1);
	}
	if (i * i == x)
	{
		return (i);
	}
	return (actual_sqrt_recursion(x, i + 1));

}

/**
 * _sqrt_recursion - function returns natural square root of a number
 * @n: input number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
