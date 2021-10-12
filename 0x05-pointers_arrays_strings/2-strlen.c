#include "main.h"

/**
 * _strlen - return the lenght of a string
 *
 * @s: string
 *
 * Return: legth of s
 */

int _strlen(char *s)
{

int l = 0;

while (*s++)
l++;

return (l);
}
