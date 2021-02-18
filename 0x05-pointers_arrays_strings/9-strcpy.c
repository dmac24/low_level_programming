#include "holberton.h"

/**
 * _strcpy - copies an entire string to a buffer
 *
 * @src: string to copy
 * @dest: Detination of copy string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)

{
int i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
