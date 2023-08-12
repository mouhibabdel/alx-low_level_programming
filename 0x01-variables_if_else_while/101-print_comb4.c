#include <stdio.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n1 = 0;
while (n1 <= 7)
{
int n2 = n1 + 1;
while (n2 <= 8)
{
int n3 = n2 + 1;
while (n3 <= 9)
{
putchar('0' + n1);
putchar('0' + n2);
putchar('0' + n3);
if (n1 != 7 || n2 != 8 || n3 != 9)
{
putchar(',');
putchar(' ');
}
n3++;
}
n2++;
}
n1++;
}
return 0;
}
