#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a 2 dimensional array
* @grid: address of 2 dimensional grid
* @height: height of a grid
* Description: frees memory of grid
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
