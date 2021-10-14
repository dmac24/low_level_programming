#include "main.h"

/**
 * _strncat - add src to the dest string
 *
 * @dest: string add to src
 * @src: string add to dest
 * @n: numbers of bytes
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)

{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j != n)
{
dest[i++] = src[j++];
}
return (dest);
}
