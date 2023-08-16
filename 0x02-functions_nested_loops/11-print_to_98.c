#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int m, y;
if (n <= 98)
{
for (m = n; m <= 98; m++)
{
if (m != 98)
{
printf("%d, ", m);
}
else
{
printf("%d\n", m);
}
}
}
else if (n >= 98)
{
for (y = n; y >= 98; y--)
if (y != 98)
{
printf("%d, ", y);
}
else
{
printf("%d\n", y);
}
}
}
