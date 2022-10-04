#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *              integers with each element initalized to 0.
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 *
 * Return: NULL If width <= 0, height <= 0, or errorm,
 *         else a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **dd;

	if (width <= 0 || height <= 0)
		return (NULL);

	dd = malloc(sizeof(int *) * height);

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd[h] = malloc(sizeof(int) * width);

		if (dd[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(dd[w]);
			free(dd);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			dd[h][w] = 0;
		}
	}
	return (dd);
}
