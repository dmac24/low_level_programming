#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the head list_t
 * @head: pointer that points to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new head of list, NULL is fail.
 */

list_t *add_node(list_t **head, const char *str)

{
list_t *new;
int i = 0;

if (head == NULL)
return (NULL);

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);

for (i = 0; str[i] != '\0'; i++);

new->len = i;
new->next = *head;
*head = new;

return (*head);

}
