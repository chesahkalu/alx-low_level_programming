#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: number to return the factorial
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
