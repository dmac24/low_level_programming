#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: point start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{

const list_t *tmp;
size_t nodes = 0;

tmp = h;

while (tmp)
{

if (tmp->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", tmp->len, tmp->str);

nodes++;
tmp = tmp->next;
}

return (nodes);
}
