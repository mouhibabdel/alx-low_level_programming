#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 *		to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int _xor_r;
unsigned int _cot;
_cot = 0;
_xor_r = n ^ m;
while (_xor_r)
{
_cot += _xor_r & 1;
_xor_r >>= 1;
}
return (_cot);
}
