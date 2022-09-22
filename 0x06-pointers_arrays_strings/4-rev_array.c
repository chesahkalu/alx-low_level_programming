#include "main.h"

/**
 * reverse_array - Reverses the content of an array of int
 * @a: array to be reversed.
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
