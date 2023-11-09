#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list list;
int v = 0; 
char *j;
char *seppa = ", ";
va_start(list, format);
while ((format != NULL) && *(format + v) != '\0')
{
switch (*(format + v))
{
case 's':  /* string */
j = va_arg(list, char *);
j = (j != NULL) ? j : "(nil)";
printf("%s", j);
break;
case 'i':
printf("%i", va_arg(list, int));
break;
case 'c':
printf("%c", va_arg(list, int));
break;
case 'f':
printf("%f", va_arg(list, double));
break;
default:
v++;
continue;
}
if (*(format + v + 1) != 0)
{
printf("%s", seppa);
}
v++;
}
putchar('\n');
va_end(list);
}
