#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
long long  n1 = 1;
long long n2 = 2;
int i;
printf("%lld, %lld", n1, n2);
for (i = 2; i < 50; i++)
{
long long s = n1 + n2;
printf(", %lld", s);
n1 = n2;
n2 = s;
}
printf("\n");
return 0;
}
