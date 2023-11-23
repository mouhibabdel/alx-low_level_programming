#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: Index of the bit to be extracted (starting from 0).
 *
 * Return: The value of the bit at the specified index (0 or 1),
 *		or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int _ma;
int _bit_v;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
_ma = 1UL << index;
_bit_v = (n & _ma) != 0;
return (_bit_v);
}
