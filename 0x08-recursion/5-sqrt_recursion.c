#include "main.h"

/**
 * sqrt_sqrt - checks for the square root of c.
 *
 * @i: sqrt
 * @c: number
 *
 * Return: sqrt and -1 if c doesn't have squirt
 */

int sqrt_sqrt(int i, int c)
{
if (c == i * i)
return (i);
if (c < i * i)
return (-1);
return (sqrt_sqrt(i + 1, c));
}

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 *
 * @n: number
 *
 * Return: Return n, If n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_sqrt(1, n));
}
