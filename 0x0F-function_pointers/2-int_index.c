#include "function_pointers.h"
/**
 * int_index - find the index of a int
 *@array: the array to find the index
 *@size: the size of the array
 *@cmp: this a function pointer.
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int o;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (o = 0; o < size; o++)
{
if (cmp(*(array + o)))
return (o);
}
return (-1);
}
