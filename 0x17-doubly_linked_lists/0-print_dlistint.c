#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start header of the linked list
 *
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
