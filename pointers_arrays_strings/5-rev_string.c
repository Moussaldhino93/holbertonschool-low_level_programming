#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to return
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, temp, len = strlen(s);

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
}
