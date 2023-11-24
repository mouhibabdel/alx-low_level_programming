#include "main.h"
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
signed long int _sizz;
char _b;
int _fg;
_sizz = sizeof(n) * 8 - 1;
if (n == 0)
{
printf("0");
return;
}
if (n == 1)
{
printf("1");
return;
}
_fg = 0;
while (_sizz >= 0)
{
_b = (n >> _sizz) &1;
if (_fg == 1)
{
putchar(_b + '0');
}
else
{
if (_b == 1)
{
putchar(_b + '0');
_fg = 1;
}
}
_sizz -= 1;
}
}
