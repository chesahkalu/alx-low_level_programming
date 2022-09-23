#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: string to be encoded.
 *
 * Return: pointer to the encoded leetspeek  string.
 */

char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (s[i] == subs[j])
				s[i] = le[j / 2];
	}
	return (s);
}
