#include "main.h"
/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The non-negative integer for which to calculate the factorial.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
