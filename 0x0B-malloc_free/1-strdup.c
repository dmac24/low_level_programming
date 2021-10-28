#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory.
 * @str: string
 *
 * Return: str duplicate.
 */

char *_strdup(char *str)

{
char *cp;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
cp = malloc((i + 1) * sizeof(char));

if (cp == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
cp[i] = str[i];
}
return (cp);
}

