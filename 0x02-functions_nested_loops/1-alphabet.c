#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
char chr;
for(chr = 'a'; chr <= 'z'; chr++)
{
putchar(chr);
}
putchar('\n');
}
