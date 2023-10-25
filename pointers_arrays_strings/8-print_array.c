#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: The pointer
 * @n: Element to print
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
	printf("%d", *(a + i));
	if (i != (n - 1))
		printf(",");
	}
	printf("\n");
}
