#include "main.h"

int actual_prime(int n, int i)

/**
 * is_prime_number - function taht checks whethet n is prime number or not
 * @n: an input number to be checked
 *
 * Return:  if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n. n - 1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && 1 > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
