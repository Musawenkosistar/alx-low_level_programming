#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Recovers a pointer to a 2 dimensional array of integers
 * @width: int 1
 * @height: int 2
 *
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, f;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			while (a >= 0)
				free(grid[a--]);
			free(grid);
			return (NULL);
		}


		for (f = 0; f < width; f++)
			grid[a][f] = 0;
	}

	return (grid);
}
