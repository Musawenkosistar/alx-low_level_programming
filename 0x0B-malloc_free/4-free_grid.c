#include <stdlib.h>
#include "main.h"

/**
 * free_grid - execution that frees a 2 dimensional grid previously made
 * @grid: pointer
 * @height: altura
 *
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
