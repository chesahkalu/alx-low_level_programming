#include "main.h"

/**
 * print_line - prints a straight line using the character _.
 * @n: number of _ characters to be printed.
 */
void print_line(int n)
{
	int length;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (length < n)
	{
		_putchar('_');
		length++;
	}
	return (0);
}
