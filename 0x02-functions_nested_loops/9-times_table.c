#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int t, f, r;
for (t = 0; t <= 9; t++)
{
for (f = 0; f <= 9; f++)
{
r = t * f;
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
 if (f < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
