#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - used to allocate a two-dimensional grid
* @width: width of grid
* @height: height of grid
* Return: Null
*/
int **alloc_grid(int width, int height)
{
int **aaa;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
aaa = malloc(sizeof(int *) * height);
if (aaa == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
aaa[x] = malloc(sizeof(int) * width);
if (aaa[x] == NULL)
{
for (; x >= 0; x--)
free(aaa[x]);
free(aaa);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
aaa[x][y] = 0;
}
return (aaa);
}
