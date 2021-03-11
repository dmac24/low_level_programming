#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>


/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: Ramdon number
 *
 * Return: The sum of parameters, return 0 si n == 0.
 */

int sum_them_all(const unsigned int n, ...)

{
unsigned int sum, i;
va_list asum;

if (n == 0)
return (0);

va_start(asum, n);

sum = 0;

for (i = 0; i < n; i++)
sum += va_arg(asum, unsigned int);

va_end(asum);

return (sum);
}
