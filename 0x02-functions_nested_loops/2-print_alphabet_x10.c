#include "holberton.h"

/**
 * print alphabet - print alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int c = 'a';
int n = '0';
while (n < 10)
{
while (c <= 'z')
{
_putchar(c++);
}
_putchar('\n');
n++;
}
}
