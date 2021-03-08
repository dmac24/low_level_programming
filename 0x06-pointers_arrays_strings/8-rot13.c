#include "holberton.h"

/**
 * rot13 - funtion that encodes a string using rot13
 *
 * @s: string
 *
 * Return: String modified.
 */

char *rot13(char *s)

{

int i, j;
char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char change[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == original[j])
{
s[i] = change[j];
break;
}
}
}
return (s);
}
