#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, u;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
int found = 0;
for (u = 0; accept[u] != '\0'; u++)
{
if (s[i] == accept[u])
{
found = 1;
break;
}
}
if (!found)
{
break;
}
count++;
}
return (count);
}
