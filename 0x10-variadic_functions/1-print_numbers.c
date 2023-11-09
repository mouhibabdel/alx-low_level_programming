#include "variadic_functions.h"
/**
 *print_numbers - print numbers
 *@separator: separate between numbers
 *@n: number to be printed
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list potr;
unsigned int k;
va_start(potr, n);
for (k = 0; k < n; k++)
{
printf("%d", va_arg(potr, int));
if (separator && k < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(potr);
}
