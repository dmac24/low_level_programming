#include "holberton.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description: Print Alphabet
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
