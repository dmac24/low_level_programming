#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @n: number of strings.
 * @separator: separator between numbers.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i;
char *string;
va_list pstring;

va_start(pstring, n);
for (i = 0; i < n; i++)
{
string = va_arg(pstring, char *);
if (string)
pintf("%s", string);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(pstring);
}
