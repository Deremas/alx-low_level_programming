#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that return pointer to 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{

	int **dere;
	int x, y;

	if (width <= 0 && height <= 0)
		return (NULL);
	dere = malloc((sizeof(int *) * height));

	if (dere == 0)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dere[x] = malloc(sizeof(int) * width);

		if (dere[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dere[x]);

			free(dere);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dere[x][y] = 0;
	}
	return (dere);
}
