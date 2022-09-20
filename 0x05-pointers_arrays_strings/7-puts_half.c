#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: The string
 */
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i++])/*counts string, and equates to len*/
		len++;

	if ((i % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i <= len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
