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
if (str == NULL)
{
return (NULL);
}
size_t length = strlen(str);
char *duplicate = (char *)malloc(length + 1);
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
