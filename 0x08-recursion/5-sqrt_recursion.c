#include "main.h"

/**
 * sqrt_find - first checks for the square root of given number
 * @g: the root to check through
 * @c: number to find sqrt of
 *
 * Return: The sqrt of C or -1 if number does not have natural sqrt
 */

int sqrt_find(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_find(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1(if not natural square root)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
