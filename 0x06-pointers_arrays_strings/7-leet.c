#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: string
 *
 * Return: String.
 */

char *leet(char *s)

{

int i, j;
char original[] = "aAeEoOtTlL";
char change[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (s[i] == original[j])
{
s[i] = change[j];
}
}
}
return (s);
}
