#include "main.h"

/**
 * print_line - prints a straight line using the character _.
 * @n: number of _ characters to be printed.
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
