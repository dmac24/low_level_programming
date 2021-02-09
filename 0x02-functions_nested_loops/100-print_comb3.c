#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Read the last digit
 *
 * Return: Always 0.
 */

int main(void)
{
int c = 48;
int d = 49;

while ((c <= 56) && (c != d))
{
putchar(c);
putchar(d);
if ((c == 56) && (d == 57))
{
putchar('\n');
c++;
d++;
}
else
{
putchar(44);
putchar(32);
}
}
return (0);
}
