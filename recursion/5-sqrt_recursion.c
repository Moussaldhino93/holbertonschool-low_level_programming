#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The parameter
 */

int _sqrt_recursion(int n) 
{
	if (n < 0) 
	{
	return -1;
	}

	sqrt((double n));
	if (n == 0)
	{
	return (0);
	}
	else
	{
	return(_sqrt_recursion(n - 1));	
}
