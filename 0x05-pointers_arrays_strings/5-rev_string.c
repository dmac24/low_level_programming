#include "holberton.h"

/**
 * rev_strig - print a string in reverse
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
int c = 0;

while (*(s + c))
c++;
c = c - 1;
while (c >= 0)
{
_putchar(*(s + c));
c--;
}
_putchar('\n');
}
