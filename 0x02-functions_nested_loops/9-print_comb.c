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
while (c < 58)
{
putchar(c);
if (c == 57)
{
putchar('\n');
c++;
}
else
{
putchar(44);
putchar(32);
c++;
}
}
return (0);
}
