#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of given size, initialized with a character.
 * @size: Size of the array.
 * @c: Character to initialize the array elements.
 * Return: Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
int u;
char *array;
if(size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if(array == NULL)
{
return (NULL);
}
for (u = 0; u < size; u++)
{
array[u] = c;
}
return (array);
}
