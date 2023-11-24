#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit needs to be set.
 * @index: Index of the bit to be set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int ma;
if (n == NULL || index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
ma = 1UL << index;
*n = *n | ma;
return (1);
}
