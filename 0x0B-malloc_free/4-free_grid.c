#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *free_grid - frees grid of 2 dimensional array
  *@grid: 2 dimensional array
  *@height: of grid
  *Return: nothing
  */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
