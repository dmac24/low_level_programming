#include "main.h"

/**
 * _puts_recursion - Recursion that prints a string + new line.
 *
 * @s: String.
 *
 * Return: Void.
 */

void _puts_recursion(char *s)

{

if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
