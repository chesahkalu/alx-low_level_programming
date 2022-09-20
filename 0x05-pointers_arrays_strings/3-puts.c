#include "main.h"

/**
 * _puts - prints a string
 * @str: The string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);/*counts each allocated character memory*/

	_putchar('\n');
}
