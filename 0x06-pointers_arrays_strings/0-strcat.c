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
for (u = 0; src[u] != '\0'; u++)
{
dest[i] = src[u];
}
dest[i] = '\0';
return (dest);
}
