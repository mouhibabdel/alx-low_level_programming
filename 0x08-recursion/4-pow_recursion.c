#include "main.h"
/**
 * _pow_recursion - Calculates the result of raising a number to a power.
 * @x: The base number.
 * @y: The exponent (power).
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, (y - 1)));
}
}
