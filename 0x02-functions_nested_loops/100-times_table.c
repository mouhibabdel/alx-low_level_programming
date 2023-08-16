#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int m, i, t;
if (n <= 15 && n >= 0)
{
for (m = 0; m <= n; m++)
{
for (t = 0; t <= n; t++)
{
i = m * t;
if (i >= 100)
{
_putchar(i / 100 + '0');
_putchar((i / 10) % 10 + '0');
_putchar(i % 10 + '0');
}
else if (i >= 10)
{
_putchar(' ');
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
if (t != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(i + '0');
}
if (t != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
