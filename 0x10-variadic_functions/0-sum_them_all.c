#include "variadic_functions.h"
/**
 * sum_them_all - sum of variadic variable
 * @n: arg int
 * Return: sum
 * 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
int summ = 0;
va_list potr;
unsigned int k;
if (n == 0)
return (0);
va_start(potr, n);
for (k = 0; k < n; k++)
summ += va_arg(potr, int);
va_end(potr);
return (summ);
}
