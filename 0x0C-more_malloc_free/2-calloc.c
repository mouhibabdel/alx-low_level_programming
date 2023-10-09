#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area to be filled.
 * @b: Byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int u;
for (u = 0; u < n; u++)
{
s[u] = b;
}
return (s);
}

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return NULL;
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
