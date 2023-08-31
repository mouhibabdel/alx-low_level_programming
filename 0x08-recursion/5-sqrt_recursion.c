#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int recursive_sqrt(int n, int low, int high)
{
if (low > high)
{
return (-1);
}
int mid = (low + high) / 2;
if (mid * mid == n)
{
return (mid);
}
if (mid * mid > n)
{
return (recursive_sqrt(n, low, mid - 1));
}
return (recursive_sqrt(n, mid + 1, high));
}
int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
if (n == 0 || n == 1)
{
return (n);
}
return (recursive_sqrt(n, 1, n));
}
