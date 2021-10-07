#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @r: integer parameter
 *
 * Return: the last digit
 */
int print_last_digit(int r)
{
int n;

n = r % 10;
if (n <= 0)
n = -1 * n;
_putchar(n + '0');
return (n);
}
