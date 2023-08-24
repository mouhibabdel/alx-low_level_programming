#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int u;
while (dest[i] != '\0')
{
i++;
}
u = 0;
while (src[u] != '\0')
{
dest[i] = src[u];
u++;
u++;
}
dest[i] = '\0';
return (dest);
}
