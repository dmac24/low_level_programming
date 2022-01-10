#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: for new node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	current = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!current)
				return (NULL);
			current = current->next;
		}

		if (current->next)
		{
			new->next = current->next;
			current->next->prev = new;
		}
		new->prev = current;
		current->next = new;
	}
	return (new);
}
