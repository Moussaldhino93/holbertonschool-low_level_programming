#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to prints
 * Return: Nothing
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar ('\n');
}
