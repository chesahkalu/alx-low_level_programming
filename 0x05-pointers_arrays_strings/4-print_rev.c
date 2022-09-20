#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 */

void print_rev(char *s)
{
	int  rev, len;

	len = 0;

	while (s[len] != '\0')/*loops thru string len & count except last null char*/
	{
		len++;
	}

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
