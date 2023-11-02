#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to calculate
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n, int i)
{
	if (n < 0)
	{
	return (-1);
	}
	if ( i * i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
