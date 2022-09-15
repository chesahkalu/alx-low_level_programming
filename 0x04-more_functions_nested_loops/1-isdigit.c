#include "main.h"

/**
 * _isdigit - Checks for a digit 0 to 9
 * @c:  the digit to be checked is c
 *
 * Return: 1 if true, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

