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
int n1;
for (n1 = 1; n1 <= size; n1++)
{
_putchar('#');
}
_putchar('\n');
}
}
