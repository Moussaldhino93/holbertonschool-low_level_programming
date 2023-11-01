#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	_strlen_recursion(s[1] + 1);
}
