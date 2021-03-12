#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{

int (*f)(int, int);
int a, b, c;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
c = f(a, b);

if (f == NULL)

{

printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", c);
return (0);
}
