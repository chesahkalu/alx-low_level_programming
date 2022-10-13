#include "function_pointers.h"

/**
 * int_index - searches for an integer in array of integers
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function used to compare values
 *
 * Return: first index for which cmp doesn't return 0
 *         or (-1) if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a] != 0)
			return (a);
	}

	return (-1);
}
