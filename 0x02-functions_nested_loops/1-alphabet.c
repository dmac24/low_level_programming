#include "holberton.h"

/**
 * print alphabet - alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
int c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
