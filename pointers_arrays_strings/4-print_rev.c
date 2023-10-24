#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s:The parameter to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;


	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
