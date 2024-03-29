#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: matrix
 * @size: size of the matrix.
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
a += size;
}
a -= size;

for (j = 0; j < size; j++)
{
sum2 += a[j];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
