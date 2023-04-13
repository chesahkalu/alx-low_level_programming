#include "search_algos.h"

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
	size_t i, j, s;

	if (array == NULL || size == 0)
		return (-1);

	s = sqrt(size);
	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	j = j < size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
