#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: int 1
 * @height: int 2
 *
 * Return: iPointer
 */
int **alloc_grid(int width, int height)
{
	int **_new_height;
	int k = 0, f = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	_new_height = malloc(height * sizeof(int *));
	if (_new_height == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		_new_height[i] = malloc(width * sizeof(int));
		if (_new_height[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(_new_height[i]);
			}
			free(_new_height);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (f = 0; f < width; f++)
		{
			_new_height[i][f] = 0;
		}
	}
	return (_new_height);
}
