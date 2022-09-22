#include "main.h"

/**
 * _strncpy - Copies a number of bytes from string src into dest
 * @dest: the string copy to copy to
 * @src: The source string.
 * @n: number of bytes to copied from src.
 *
 * Return: pointer to final result  string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
