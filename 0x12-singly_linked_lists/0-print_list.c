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
const list_t *temp;
size_t n = 0;

temp = h;

while (temp != NULL)
{
printf("[%u] ", temp->len);

if (!temp->str)
printf("(nil)\n");

else
printf("%s\n", temp->str);
temp = temp->next;
n++;
}

return (n);

}
