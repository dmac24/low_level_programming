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
char c = 'z';
while (c > 96)
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}
