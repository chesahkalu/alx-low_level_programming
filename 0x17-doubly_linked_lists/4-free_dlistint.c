#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a linked dlistint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
