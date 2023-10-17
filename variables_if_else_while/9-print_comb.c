#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Rerurn: Always 0 (Success)
 */

int main(void)
{
	// Print combinations of single-digit numbers separated by ","	
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

	if (n < 9)
	{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
