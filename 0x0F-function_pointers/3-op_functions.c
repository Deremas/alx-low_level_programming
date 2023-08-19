#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of integers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference of an integers
 * @a: first number
 * @b: second number
 *
 * Return: subs
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the meltiplication of an integers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of the integers
 * @a: first number
 * @b: secind number
 *
 * Return: division resullt
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modulous of the integers
 * @a: first number
 * @b: second number
 *
 * Return: modulous
 */

int op_mod(int a, int b)
{
	return (a % b);
}
