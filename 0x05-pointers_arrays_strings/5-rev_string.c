#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * Description -  Reverse de String and print
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
int i, j, l;
char tmp;

i = 0;
j = 0;

while (s[i] != '\0')
{
i++;
}
l = i / 2;
i = i - 1;
while (i >= l)
{
tmp  = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
j++;
}
}
