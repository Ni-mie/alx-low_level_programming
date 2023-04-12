#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of
 *              integers.
 * @width: Width
 * @height: Height
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		memset(grid[i], 0, sizeof(int) * width);
	}
	return (grid);
}
