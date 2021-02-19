#include "holberton.h"

/**
 * _strlen - return the lenght of a string
 *
 * @s: string
 *
 * Return: legth of s
 */

int _strlen(char *s)
{

int l = 0;

while (*s++)
l++;

return (l);
}


/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
int i;

i = _strlen(str);
if (i % 2 != 0)
i++;
i /= 2;
while (str[i] != '\0')
_putchar(str[i++]);
_putchar('\n');
}
