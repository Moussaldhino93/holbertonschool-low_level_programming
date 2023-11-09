#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Entry point
 * @str: string we need duplicate
 * Return : A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == 0)
	{
	return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)

	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != 0)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
