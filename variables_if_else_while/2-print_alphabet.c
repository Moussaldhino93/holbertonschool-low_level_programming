#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - putchar prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++);
	{
		putchar(l);
	};
	for (l ='A'; l<='Z'; l++);
	{
		putchar(l);
	};
	putchar ("\n");
	return (0);
}
