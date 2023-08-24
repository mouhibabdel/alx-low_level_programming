#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int u = n - 1;
while (i < u)
{
int j = a[i];
a[i] = a[u];
a[u]= j;
u--;
i++;
}
}
