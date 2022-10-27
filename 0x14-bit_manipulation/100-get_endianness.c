#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianness(void)
{
	char *y;
	int x = 1;

	y = (char *)&x;

	return (*y);
}
