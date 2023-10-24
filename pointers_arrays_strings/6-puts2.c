#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string to prints
 */

void puts2(char *str)
{
	int i;

	i = 0;
	for (i = 0; i < str; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
