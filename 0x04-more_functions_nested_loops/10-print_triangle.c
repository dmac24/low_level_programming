#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size
 *
 * Return: void.
 */

void print_triangle(int size)
{
int i, n, s;

if (size < 1)
{
_putchar('\n');
return;
}
i = 0;
s = size - 1;
while (i < size)
{
n = 0;
while (n < size)
_putchar((n++ < s) ? ' ' : '#');
_putchar('\n');
s--;
i++;
}
}
