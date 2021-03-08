#include "holberton.h"

/**
 * factorial - Recursion that returns the factorial of a given number.
 *
 * @n: Number.
 *
 * Return: Factorial of n, return -1 if n is lower than 0.
 */

int factorial(int n)

{
int i = n;

if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
else
{
i *= factorial(n - 1);
return (i);
}
}
