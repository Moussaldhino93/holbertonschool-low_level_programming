#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create _array - Creates an array of chars,
 *  and initializes it with a specific
 *  @size: size of memory
 *  @c: parameter
 *  Return: A pointer to the allocated a memory
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	
	if (size != 0)
	{
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr != 0)
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
		}
	}
	return (ptr);
}
