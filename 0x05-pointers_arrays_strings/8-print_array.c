#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a given number of elements
 *               of an array
 * @a: The array
 * @n: The number to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
		printf(", ");
		}
	}

	printf("\n");
}
