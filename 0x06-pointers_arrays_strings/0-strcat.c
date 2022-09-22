#include "main.h"

/**
 * strcat - Concatenates(put together) the string pointed to by @src,
 *          to the end of the string pointed to by @dest.+ terminating null byt
 *          at the end
 * @dest: pointer to the string to be concatenated upon.
 * @src: pointer to source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int aray, lent;

	aray = 0;
	for (lent = 0; dest[lent] != '\0'; lent++)
		;
	while (src[aray] != '\0')
	{
		dest[lent + aray] = src[aray];
		aray++;
	}
	return (dest);
}
