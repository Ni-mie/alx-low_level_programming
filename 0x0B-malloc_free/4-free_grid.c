#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously created by
 *             your alloc_grid function.
 * @grid: Grid
 * @height: Height
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
