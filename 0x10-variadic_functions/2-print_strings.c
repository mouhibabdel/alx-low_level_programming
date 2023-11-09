#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: separate between numbers
 *@n: number of strings be printed
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list potr;
unsigned int j;
char *strl;
va_start(potr, n);
for (j = 0; j < n; j++)
{
strl = va_arg(potr, char *);
if (strl)
printf("%s", strl);
else
printf("(nil)");
if (separator && k < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(potr);
}
