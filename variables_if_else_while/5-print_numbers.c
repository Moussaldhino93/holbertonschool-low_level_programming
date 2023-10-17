#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all single digit numbers of base, followed by new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 10)
		printf("starting from 0\n");

	return (0);
}
