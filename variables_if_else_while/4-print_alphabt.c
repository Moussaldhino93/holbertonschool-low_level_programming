#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	if (l != 'e' && != 'q')
		putchar(l);

	putchar ('\n');
	return (0);
}
