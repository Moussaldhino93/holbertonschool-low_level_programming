#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all single digit numbers of base, followed by new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%c", num);

	printf("\n");
	return (0);
}
