#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to calculate
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_recursion(n + 1));
}

/**
 * actual_sqrt_recursion - Calculate the natural square root of a number
 * @i: Number to calculate
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
