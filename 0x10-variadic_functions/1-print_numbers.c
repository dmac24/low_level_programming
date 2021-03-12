#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @n: number
 * @separator: separator between numbers.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

unsigned int i;
va_list pnum;

if (separator == NULL)
{
return;
}
va_start(pnum, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(pnum, unsigned int));
if (i < n - 1 && separator)
printf("%s", separator);
}

printf("\n");
va_end(pnum);
}
