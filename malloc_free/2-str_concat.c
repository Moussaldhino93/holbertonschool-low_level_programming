#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * Return: point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_concat;
	int n, i = 0, j = 0;

	if (s1 == NULL) 
	{
	s1 = "";
	}
	if (s2 == NULL) 
	{
	s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
		j++;

	ptr_concat = malloc(sizeof(char) * j);
	
	if (ptr_concat == NULL)
		return (NULL);
	
	for (n = 0; s1[n]; n++)
		ptr_concat[i++] = s1[n];
	
	for ( n = 0; s2[n]; n++)
		ptr_concat[i++] = s2[n];

	return(ptr_concat);
}	
