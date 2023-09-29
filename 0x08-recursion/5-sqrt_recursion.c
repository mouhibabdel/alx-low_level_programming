#include "main.h"
int sqr(int u, int h);
/**
 * actual_sqrt_recursion - calculates the square root recursively
 * @n: the number for which the square root is calculated
 * @i: the current guess for the square root
 *
 * Return: the calculated square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (sqr(n, 0));
}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int sqr(int u, int h)
{
if (h * h > u)
{
return (-1);
}
else if (h * h == u)
{
return (h);
}
return (sqr(u, h + 1));
}
