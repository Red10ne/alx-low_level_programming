#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that return a pointer to a 2 dim. arr.
 * @width: width of the grid
 * @height: height of the grid
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
