#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable struct dog.
 *
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != '\0')
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
