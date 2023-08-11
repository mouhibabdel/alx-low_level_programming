#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main()
{
char charac = 'a';
char chrac = 'A';
while (charac <= 'z')
{
putchar(charac);
charac++;
}
while (chrac <= 'Z')
{
putchar(chrac);
chrac++;
}
putchar('\n');
return (0);
}
