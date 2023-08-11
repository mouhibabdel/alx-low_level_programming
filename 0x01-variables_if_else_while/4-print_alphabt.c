#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charac = 'a';
while (charac <= 'z')
{
if (charac != 'e' && charac != 'q')
{
putchar(charac);
}
charac++;
}
putchar('\n');
return (0);
}
