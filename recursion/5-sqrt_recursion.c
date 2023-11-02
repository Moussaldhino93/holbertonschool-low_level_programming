#include "main.h"

/**
 * _sqrt_root - Look for the root
 * @n: The number to calculate
 * @root: Integer to test root
 * Return: The natural square root of n
 */

int _sqrt_root(int n, int root)
{
	if (root * root == n)
	{
	return (root);
	}
	if (root * root > n)
	{
	return (-1);
	}
	return (_sqrt_root(n, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square of a number
 * @n: The number to given
 * Return: Natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
	return (_sqrt_root(n, 0));
}
