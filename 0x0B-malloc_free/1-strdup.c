#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: string to copy
 *
 * Return: null if insufficient memory or str == null
 *         a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;


	for (i = 0; str[i]; i++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[length] = '\0';

	return (copy);
}
