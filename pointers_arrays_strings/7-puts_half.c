#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string to print
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;

	i = 0;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
