#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: copy of memoria area.
 * @src: memory area.
 * @n: numbers of bytes
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
int i = 0;

while (n > 0)
{
src[i] = dest[i];
i++;
}
return (dest);
}
