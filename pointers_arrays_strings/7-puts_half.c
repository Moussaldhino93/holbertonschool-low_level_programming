#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string to print
 * Return: Nothing
 */

void puts_half(char *str)
{
	int m = 0;
	int j;

	while (str[j] != '\0')
	{
	j++;
	}
	if (m % 2 == 1)
	{
	j = (m - 1) / 2;
	j += 1;
	}
	else
	{
	j = m / 2;
	}

	for (; j < m; j++)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
