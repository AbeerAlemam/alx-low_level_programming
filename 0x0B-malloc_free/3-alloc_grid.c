#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);

		if (m[i] == NULL)
		{
			for (; i >= 0; i--)
				free(m[i]);

			free(m);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}

	return (m);
}
