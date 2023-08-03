#include "main.h"

/**
 * actual_prime - determine if the number is prime or not
 * @a: input
 * @b: divider
 *
 * Return: 0
 */
int actual_prime(int a, int b)
{
		if (a == b)
	{
		return (1);
	}
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	return (actual_prime(a, b + 1));
}

/**
 * is_prime_number - function taht checks whethet n is prime number or not
 * @n: an input number to be checked
 *
 * Return:  if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
