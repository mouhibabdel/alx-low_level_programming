#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 16)
{
if (num < 10)
{
putchar('0' + num);
}
else
{
putchar('a' + num - 10);
}
num++;
}
putchar('\n');
return (0);
}
