#include "holberton.h"

/**
 * more_numbers - print numbers
 *
 * Return: void.
 */

void more_numbers(void)
{
int li = 0;
int i = 0;

while (li < 10)
{
while (i <= 14)
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
i++;
}
li++;
_putchar('\n');
}
}
