#include "main.h"

/**
 * void - Entry point.
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int c = 0;
	int l;

	while (c <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
	_putchar(10);

	}
}
