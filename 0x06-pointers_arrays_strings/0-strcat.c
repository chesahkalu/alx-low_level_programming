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
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
