#include "holberton.h"

/**
 * swap_int - swap value from a to b and from b to a
 *
 * Description - Reset values a and b
 *
 * @a: variable 1
 *
 * @b: variable 2
 *
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
*b = c;
}
