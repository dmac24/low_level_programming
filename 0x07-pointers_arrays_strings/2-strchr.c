#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string
 * @c: Character
 *
 * Return: Legth Of S
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);
return (0);
}
