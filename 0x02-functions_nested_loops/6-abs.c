#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
if (n > 0)
{
_putchar(n + '0');
}
else if (n < 0)
{
_putchar(-n + '0');
}
else
{
_putchar('0');
}
