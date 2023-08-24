#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int u = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[u] != '\0' && u < n)
{
dest[i] = src[u];
i++;
u++;
}
dest[i] = '\0';
return (dest);
}
