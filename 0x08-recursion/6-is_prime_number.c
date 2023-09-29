#include "main.h"
int prime(int u, int j);
/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
{
if (n <= 1)
{
return (0);
}
return (prime(n, (n - 1)));
}
}
/**
 * actual_prime - Calculates if a number is prime using recursive method.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int prime(int u, int j)
{
if (j == 1)
{
return (1);
}		
else if (u % j == 0 && j > 0)
{
return (0);
}
return (prime(u, j - 1));
}
