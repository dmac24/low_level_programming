#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - conditional value of 0
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
int ldo;

srand(time(0));
n = rand() - RAND_MAX / 2;
ldo = n % 10;
if (ldo > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, ldo);
}
else if (ldo == 0)
{
printf("Last digit of %i is %i and is 0\n", n, ldo);
}
else
{
printf("Last digit of %i is %i is less than 6 and not 0\n", n, ldo);
}

return (0);
}
