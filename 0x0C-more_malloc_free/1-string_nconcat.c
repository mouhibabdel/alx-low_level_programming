#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string.
 * @s1: The destination string to append to.
 * @s2: The source string to concatenate from.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0;
unsigned int i, u;
if (s1 != NULL)
{
while (s1[len1] != '\0')
{
len1++;
}
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
{
len2++;
}
}
if (n >= len2)
{
n = len2;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (u = 0; u < n; u++)
{
result[i + u] = s2[u];
}
result[i + u] = '\0';
return (result);
}
