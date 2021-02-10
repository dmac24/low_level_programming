#include "holberton.h"

/**
 * print alphabet - print alphabet
 *
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int alp = 'a';
while (alp <= 'z')
{
_putchar(alp++);
}
_putchar('\n');
}
