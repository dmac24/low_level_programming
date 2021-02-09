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

 while ((d < 58 ) && (c != d))
{
putchar(c);
putchar(d);
 c++;
 d++;
 putchar(44);
 putchar(32);
 if ((c == 57) && (d == 57))
   {
putchar('\n');
   }
  }

return (0);
}
