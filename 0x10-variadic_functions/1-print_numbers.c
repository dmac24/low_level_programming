#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  function given as a parameter on each element of an array.
 *
 * @array: Array to Iterate.
 * @size: Size.
 * @action: Function to call on array.
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

unsigned int i;

if (array != NULL && action != NULL && size > 0)

{
for (i = 0; i < size; i++)
action(array[i]);
}
}
