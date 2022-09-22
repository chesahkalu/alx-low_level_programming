#include "main.h"

/**
 * _strncat - Concatenates two strings using 
 *            inputted number of bytes from src.
 * @dest: pointer to destination tobe appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int aray, lent;

	aray = 0;
	for (lent = 0; dest[lent] != '\0'; lent++)
		;
	while (src[aray] != '\0' && aray < n)
	{
		dest[lent + aray] = src[aray];
		aray++;
	}
	return (dest);
}
