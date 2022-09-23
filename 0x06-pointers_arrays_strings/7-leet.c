#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: string to be encoded.
 *
 * Return: pointer to the encoded leetspeek  string.
 */

char *leet(char *str)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (str[i] == subs[j])
				str[i] = le[j / 2];
	}
	return (str);
}
