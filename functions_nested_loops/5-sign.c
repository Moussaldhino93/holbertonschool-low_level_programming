#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of number
 * @n: The sign of number
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		printf("+");
		return (0);
	}
	else if (n > 0)
	{
		printf("+");
		return (1);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
