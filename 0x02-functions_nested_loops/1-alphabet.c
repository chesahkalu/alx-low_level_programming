#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
