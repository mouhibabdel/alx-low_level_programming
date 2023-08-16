#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int n1 = 1;
int n2 = 2;
printf("%d, %d", n1, n2);
for (int i = 2; i < 50; i++)
{
int s = n1 + n2;
printf(", %d", s);
n1 = n2;
n2 = s;
}
printf("\n");
return 0;
}
