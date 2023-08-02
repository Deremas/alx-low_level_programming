#include "main.h"
#include <stdio.h>

/**
* print_diagsums – prints sum of two diagonals of a square matrix
* @a: matrix
* @size: size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)

{
	int index, summ1, summ2 = 0;

	for (index = 0; index < size; index++)
	{
	summ1 += a[index];
	a += size;
	}
	a -= size;

	for (index = 0; index < size; index++)
	{
	summ2 += a[index];
	a += size;
	}
	printf("%d, %d", summ1, summ2);
}
