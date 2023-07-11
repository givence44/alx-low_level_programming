#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **vic;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	vic = malloc(sizeof(int *) * height);

	if (vic == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		vic[i] = malloc(sizeof(int) * width);

		if (vic[i] == NULL)
		{
			for (; i >= 0; i--)
				free(vic[i]);

			free(vic);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			vic[i][j] = 0;
	}

	return (vic);
}
