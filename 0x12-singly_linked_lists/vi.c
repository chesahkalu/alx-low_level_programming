#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: string to find the length of
 *
 * Return: string length
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a node to the start of linked list
 * @head: pointer to head of linked list to find the size of
 * @str: string to insert into the node of the linked list
 *
 * Return: number of nodes in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (malloc(sizeof(list_t)));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->next = *head;
		new->str = strdup(str);
		new->i = _strlen(str);
		*head = new;
	}
	else
	{
		new->next = *head;
		new->str = strdup(str);
		new->i = _strlen(str);
		*head = new;
	}
	return (*head);
}
