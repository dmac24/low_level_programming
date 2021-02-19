#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
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
