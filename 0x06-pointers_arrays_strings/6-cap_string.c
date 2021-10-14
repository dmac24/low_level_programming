#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: string modified.
 */

char *cap_string(char *s)

{

int i = 0;

if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;

while (s[i] != '\0')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
if (s[i] == 32 || s[i] == ',' || s[i] == '(' || s[i] == ')'
|| s[i] == '\n' || s[i] == '.' || s[i] == ';' || s[i] == '?'
|| s[i] == '{' || s[i] == '}' || s[i] == '\t')
s[i + 1] -= 32;
}
i++;
}
return (s);
}
