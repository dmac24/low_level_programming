#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Alphabet
 *
 * Return: Always 0.
 */

int main(void)
{
char c = 'a';

while (c <= 'z')
{
if ((c != 'e') && (c != 'q'))
{
putchar(c);
c++;
}
else
{
c++;
}
}
putchar('\n');

return (0);
}
