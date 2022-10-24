#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at given index
 *                           of a listint_t linked list.
 * @head: double pointer to the first head node in the list
 * @index: index of the node to delete
 *
 * Return: (1) if success ELSE (-1) if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	current = *head;
	for (node = 0; node < index - 1; node++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	current->next = next->next;
	free(temp);
	return (1);
}

