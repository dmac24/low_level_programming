#include "function_pointers.h"
#include <stdlib.h>


/**
 * int_index - Function that searches for an integer.
 *
 * @array: Array
 * @size: Size
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: Returns the index of the first element !0,
 * return -1 if no element matches or size <= 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
