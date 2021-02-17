#include "holberton.h"

/**
 * puts2 - print some characters
 *
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
int n = 0;

while (*(str + n))
{
_putchar(*(str + n));
n = n + 2;
}
_putchar('\n');
}
