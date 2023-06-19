#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fucntion that frees a 2 dim previously created you.
 * @grid: first tab
 * @height: height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int flag;

	flag = 0;
	if (grid == NULL || height == 0)
		return;
	while (flag < height)
	{
		free(grid[flag]);
		flag++;
	}
	free(grid);
}
