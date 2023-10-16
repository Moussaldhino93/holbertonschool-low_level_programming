#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printf The string Last digit of
 * Return: Always 0
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 5)
		{
			printf("%dThe string is positive\n", n);
		}
		else if (n < 0)
		{
			printf("%dThe string is negative\n", n);
		}
		else
		(n == 0);
		{
			printf("%dThe string is posititve\n", n);
		}
		return (0);
}
