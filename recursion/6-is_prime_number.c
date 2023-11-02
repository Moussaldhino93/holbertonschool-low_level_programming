#include "main.h"

/**
 * is_prime_integer - The input integer is a prime
 * @n: The parameter
 * @i: The iteration
 * Return: 1 for prime or 0 otherwise
 */

int is_prime_integer(int n, int integer)
{
	if (n <= 1)
	{
	return (1);
	}
	if (n % integer == 0)
	{
	return (0);
	}
	return (is_prime_integer(n, integer - 1));
}
