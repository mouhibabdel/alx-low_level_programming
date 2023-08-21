#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int lon = 0;
int m;
while (*s != '\0')
{
lon++;
s++;
}
s--;
for (m = lon; m > 0; m--)
{
putchar(*s);
s--;
}
putchar('\n');
}
