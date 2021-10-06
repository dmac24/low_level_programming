#include "main.h"

/**
 * print_sign - print sign of number
 *
 * @n: parameter to check
 *
 * Return: 1 if n is greater than zero. 0 if n is zero. 
 * and return -1 if n is less than zero.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
