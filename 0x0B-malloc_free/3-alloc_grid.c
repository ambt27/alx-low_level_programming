#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Null if width = 0 or height = 0 or neg
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			free(tab);
			for (j = 0; j <= i; j++)
				free(tab[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
