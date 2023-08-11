#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charac = 'a';
while (charac <= 'z')
{
putchar(charac);
charac++;
}
putchar('\n');
return (0);
}
