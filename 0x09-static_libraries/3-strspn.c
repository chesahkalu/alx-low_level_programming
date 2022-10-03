#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: The number of bytes in s inital segment,which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, bytes, count;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				bytes++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (bytes);
		}
	}

	return (bytes);
}
