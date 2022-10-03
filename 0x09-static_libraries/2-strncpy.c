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
	int aray = 0, src_cnt = 0;

	while (src[aray++])
	{
		src_cnt++;
	}

	for (aray = 0; src[aray] && aray < n; aray++)
	{
		dest[aray] = src[aray];
	}

	for (aray = src_cnt; aray < n; aray++)
	{
		dest[aray] = '\0';
	}

	return (dest);
}
