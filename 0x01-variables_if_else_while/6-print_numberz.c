#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
