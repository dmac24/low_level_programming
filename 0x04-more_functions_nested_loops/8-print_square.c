#include "main.h"

/**
 * print_square - print square with #
 *
 * @size: size
 *
 * Return: void.
 */

void print_square(int size)
{
int i, n;

i = 0;
while (size > 0 && i < size)
{
n = 0;
while (n < size)
{
_putchar('#');
n++;
}
_putchar('\n');
i++;
}
if (size <= 0)
_putchar('\n');
}


