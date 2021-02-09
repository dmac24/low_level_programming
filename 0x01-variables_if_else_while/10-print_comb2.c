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
int d = 48;

while ((c < 58) && (d < 58))
{
putchar(c);
putchar(d);
if ((c == 57) && (d == 57))
{
putchar('\n');
c++;
d++;
}
else
{
putchar(44);
putchar(32);
if (d < 57)
{
d++;
}
else
{
d = 48;
c++;
}
}
}
return (0);
}
