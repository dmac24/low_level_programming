#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - create a new array containing a copy
 * of the given string
 * @str: a pointer to the string to copy
 *
 * Return: NULL or pointer to the copy.
 */

char *_strdup(char *str)
{
char *dup;
unsigned int size = 0;

if (str)
{
while (str[size++])

dup = malloc(sizeof(char) * size);
if (dup)
{
while (size--)
dup[size] = str[size];

return (dup);
}
}
return (NULL);
}

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: null or pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
if (name)
{
d->name = _strdup(name);
if (!(d->name))
{
free(d);
return (NULL);
}
}
else
d->name = NULL;
d->age = age;
if (owner)
{
d->owner = _strdup(owner);
if (!(d->owner))
{
free(d->name);
free(d);
return (NULL);
}
}
else
d->owner = NULL;

return (d);
}
