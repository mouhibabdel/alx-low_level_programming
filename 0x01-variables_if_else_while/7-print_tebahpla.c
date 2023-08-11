#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lett = 'z';
while (lett >= 'a')
{
putchar(lett);
lett--;
}
putchar ('\n');
return (0);
}
