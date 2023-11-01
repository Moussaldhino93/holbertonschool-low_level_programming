#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: 
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	char s [ 100 ];

	printf ( "%d \n " , string_length (s));
	return 0;
}

int _strlen_recursion(char *s) 
{
	if ( * s == ' \0 ' )
	return 0;

	return (1 + string_length (s++));
}
