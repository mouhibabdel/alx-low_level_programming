#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
