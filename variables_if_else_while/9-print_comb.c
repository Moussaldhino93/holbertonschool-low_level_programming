#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Rerurn: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (n < 9)
		putchar(',');
		putchar(' ');


	putchar('\n')
	return (0);
}
