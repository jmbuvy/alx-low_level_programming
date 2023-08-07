#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing the Array 2d.
 * @grid: 2d Grid.
 * @height: The height dimensions of the grid.
 * Des: Frees the memory of grid.
 * Return: nothing
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
