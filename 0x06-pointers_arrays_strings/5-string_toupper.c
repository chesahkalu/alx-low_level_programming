#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  to uppercase.
 * @str: string to be changed.
 *
 * Return: pointer to the changed string.
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
