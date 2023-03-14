#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the array 2d
 * @grid: pointer to array of ints
 * @height: number of rows
 * Return: nothin
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
