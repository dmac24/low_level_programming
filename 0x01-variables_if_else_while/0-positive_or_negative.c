#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - conditional value of 0
 *
 * Description: if the number is greater than 0: is positive, if the  * number is 0: is zero, if the number is less than 0: is negative.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n");
else if (n < 0)
printf("%d is negative\n");
else
printf("%d is zero\n");

return (0);
}
