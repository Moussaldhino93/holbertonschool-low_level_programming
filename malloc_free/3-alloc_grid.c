#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: The width of a 2 dimensional array
 * @height: The height of a 2 dimensional array
 * Return: If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **tstr;
	int hei_i, wid_i;

	if (width <= 0 || height <= 0 )
		return (NULL);

	tstr = malloc(sizeof(int *) * height);

	if (tstr == NULL)
		return (NULL);

	for (hei_i = 0; hei_i < height; hei_i++)
	{
		tstr[hei_i] = malloc(sizeof(int) * width);

		if (tstr[hei_i] == NULL)
		{
			for (; hei_i >= 0; hei_i--)
				free(tstr[hei_i]);

			free(tstr);
			return (NULL);
		}
	}

	for (hei_i = 0; hei_i < height; hei_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			tstr[hei_i][wid_i] = 0;
	}
	
	return (tstr);
}
