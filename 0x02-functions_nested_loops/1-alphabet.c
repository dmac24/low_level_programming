#include "holberton.h"

/**
 * print alphabet - alphabet
 *
 * @alp - character
 *
 * Return: void
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
