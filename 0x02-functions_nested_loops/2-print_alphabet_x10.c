#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int s = 0;
int c = 'a';

while (s++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
