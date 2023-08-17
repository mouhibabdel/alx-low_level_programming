#include "main.h"
/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int n1, n2;
for (n1 = 0; n1 < size; n1++)
{
for (n2 = 0; n2 < size; n2++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
