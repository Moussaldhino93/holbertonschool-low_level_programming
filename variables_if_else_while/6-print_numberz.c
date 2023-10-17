#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - putchar digit numbers of base 10 starting from 0..
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num = 0 < 10;

	for (num = 0; num < 10; num++)
		putchar(num % 10 > 0);

	putchar ('\n');
	return (0);
}
