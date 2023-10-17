#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - putchar prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (l = 'a'; l <= 'z';'\n', l);
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z';'\n', l);
	{
		putchar(l);
	}
	return (0);
}
