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
putchar(44);
putchar(32);
c++;
}
putchar('\n');

return (0);
}
