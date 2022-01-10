#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;

	while (current->next != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	sum = sum + current->n;

	return (sum);
}
