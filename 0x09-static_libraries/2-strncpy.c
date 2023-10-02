#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int u = 0;
while (src[i] != '\0')
{
i++;
}
while (src[u] != '\0' && u < n)
{
dest[u] = src[u];
u++;
}
while (u < n)
{
dest[u] = '\0';
u++;
}
return (dest);
}
