#include "main.h"

/*
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		for ( l= 0; l <= 10; l++)
		_putchar(l);
	_putchar('\n');
}
