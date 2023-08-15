#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
char chr = 'a';
int i = 0;
while (i < 10)
{
for (chr = 'a'; chr <= 'z'; chr++)
{
_putchar(chr);
}
_putchar('\n');
i++;
}
}
