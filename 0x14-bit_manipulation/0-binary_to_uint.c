#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer to binary value
 * Return: decimal number
 *		in error or null return 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int _rlt = 0;//_result
int o = 0;
if (b == NULL)
{
return (0);
}
while (b[o] != '\0')
{
if (b[o] == '0' || b[o] == '1')
{
_rlt = _rlt << 1;
_rlt = _rlt | (b[o] - '0');
o++;
}
else
{
return (0);
}
}
return (_rlt);
}
