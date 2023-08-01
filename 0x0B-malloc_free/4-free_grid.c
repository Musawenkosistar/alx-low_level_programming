#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Execution that allows a 2 dimensional grid previously made
 * @grid: pointer
 * @height: altura
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	if (grid != NULL || height != 0)
	{
		for (f = 0; f < height; f++)
		{
			free(grid[f]);
		}
		free(grid);
	}
}
