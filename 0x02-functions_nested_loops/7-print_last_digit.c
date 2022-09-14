#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The given number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;/*changes last digit back to + if its -*/

	_putchar(last_digit + '0');

	return (last_digit);
}

