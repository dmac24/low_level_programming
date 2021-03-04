#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print diferrent conbination of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
int i = 48;
int j = 49;

while  ((i < 57) && (j < 58))
{
putchar(i);
putchar(j);
if ((i == 56) && (j == 57))
{
putchar('\n');
i++;
j++;
}
else
{
putchar(',');
putchar(' ');
if (j < 57)
{
j++;
}
else
{
i++;
j = 1 + i;
}
}
}
return (0);
}
