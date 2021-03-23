#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked.
 *
 * @h: list.
 *
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{

const list_t *tmp;
size_t nodes = 0;

tmp = h;

while (tmp != NULL)
{

tmp = tmp->next;
nodes++;

}

return (nodes);
}
