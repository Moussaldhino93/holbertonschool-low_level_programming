#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - putchar digit numbers of base 10 starting from 0..
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num;

	for (num = 0; num <= 10; num++)
		putchar(num);

	putchar ('\n');
	return (0);
}
