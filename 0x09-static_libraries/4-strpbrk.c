#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, u;
for (i = 0; s[i] != '\0'; i++)
{
for (u = 0; accept[u] != '\0'; u++)
{
if (s[i] == accept[u])
{
return (&s[i]);
}
}
}
return(0);
}
