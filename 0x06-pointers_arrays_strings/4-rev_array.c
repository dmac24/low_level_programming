#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: n
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{

int tmp;
int  j = 0;
int  l = n / 2;
n = n - 1;
while (n >= l)
{
tmp  = a[j];
a[j] = a[n];
a[n] = tmp;
n--;
j++;
}
}
