#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 *			on each element of an array
 *@array: the array to iterate
 *@size: size of the array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t j;
if (array && size && action)
{
for (j = 0; j < size; j++)
action(*(array + j));
}
}
