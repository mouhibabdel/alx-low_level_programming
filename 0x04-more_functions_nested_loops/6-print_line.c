#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int n1;
for (n1 = 1; n1 <= n; n1++)
{
_putchar('_');
}
_putchar('\n');
}
}
