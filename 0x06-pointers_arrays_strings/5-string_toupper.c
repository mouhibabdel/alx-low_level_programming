#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
int u;
for (u = 0; n[u] != '\0'; u++)
{
if (n[u] <= 'z' && n[u] >= 'a')
{
n[u] = n[u] - 32;
}
}
return (n);
}
