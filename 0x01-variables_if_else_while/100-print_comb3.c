#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int num = 0;
while (num <= 8)
{
int numb = num + 1;
while (numb <= 9)
{
putchar(num + '0');
putchar(numb + '0');
if (num != 8 || numb != 9)
{
putchar(',');
putchar(' ');
}
numb++;
}
num++;
}
putchar('\n');
return (0);
}
