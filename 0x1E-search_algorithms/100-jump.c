#include "search_algos.h"
#include <math.h>

/**
 * minimum_value - finds the minimum of two values
 * @a: first value to compare
 * @b: second value to compare
 *
 * Return: The smaller of the two values, or a if equal
 */
size_t minimum_value(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

/**
  * jump_search - Search for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search in.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: -1 on failure,
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t l, r, jump;
	int val;

	if (array != NULL && size > 0)
	{
		jump = sqrt(size);
		l = 0;
		r = jump;
		val = array[l];
		printf("Value checked array[%lu] = [%d]\n", l, val);
		while (r < size && val < value)
		{
			if (array[r] >= value)
				break;
			l += jump;
			r += jump;
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
		}
		if (l >= size || val > value)
			return (-1);
		printf("Value found between indexes [%lu] and [%lu]\n", l, r);
		while (l <= minimum_value(size - 1, r) && val <= value)
		{
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
			if (val == value)
				return (l);
			l++;
		}
	}
	return (-1);
}
