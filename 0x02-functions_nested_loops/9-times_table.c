#include "holberton.h"
/**
 * times_table - prints times table
 *
 * Return: void
 */
void times_table(void)
{
int i, n, pt, po, lt;

i = 0;
pt = 0;
po = 0;
while (i < 10)
{
n = 0;
lt = 0;
while (n < 10)
{
lt = n *i;
po = lt % 10;
pt = (lt - po) / 10;
if (pt == 0 && n > 0)
_putchar(' ');
else if (n > 0)
_putchar(pt + '0');
_putchar(po + '0');
if (n == 9)
break;
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
i++;
}
}
