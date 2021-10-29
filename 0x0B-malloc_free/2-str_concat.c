#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that returns a pointer to a newly
 * allocated space in memory which contains the contents of s1 and s2.
 * @s1: firts content.
 * @s2: second content.
 *
 * Return: str concat or Null.
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
  
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

concat = malloc(sizeof(char) * i + j + 1);

if (concat == NULL)
return (NULL);

while (s1[k] != '\0')
{
concat[k] = s1[k];
k++;
}

while (s2[l] != '\0')
{
concat[k] = s2[l];
k++;
l++;
}

concat[k] = '\0';
return (concat);
}
