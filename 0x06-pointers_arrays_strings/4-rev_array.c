#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = n; i >= 0; i--)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
