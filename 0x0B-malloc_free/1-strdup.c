#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory location.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
char *duplicate;
int u, i = 0;
if (str == NULL)
{
return (NULL);
}
u = 0;
while (str[u] != '\0')
{
u++;
}
duplicate = malloc(sizeof(char) * (u + 1));
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
