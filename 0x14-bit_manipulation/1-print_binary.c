#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
