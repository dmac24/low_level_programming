#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: Area pointed.
 * @n: Numbers of bytes for fill.
 * @b: Constant byte.
 *
 * Return: Returns a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)

{
int i = 0;

while (n > 0)
{
s[i] = b;
i++;
n--;
}

return (s);
}
