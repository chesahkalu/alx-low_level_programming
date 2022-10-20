#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list(pointer to the start of the list_t)
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	const list_t *i;
	unsigned int x;

	i = h;
	for (x = 0; i; x++)
	{
		printf("[%u] %s\n", i->len, i->str);
		i = i->next;
	}
	return (x);
}
