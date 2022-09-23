#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  to uppercase.
 * @str: string to be changed.
 *
 * Return: pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
