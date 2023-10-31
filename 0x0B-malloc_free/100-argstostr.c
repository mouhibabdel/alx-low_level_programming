#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates program arguments into a string with newlines.
 * @ac: Number of program arguments.
 * @av: Array of argument strings.
 *
 * Description: Concatenates program arguments with newlines, returning a string.
 *
 * Return: Pointer to the concatenated string, or NULL on memory allocation failure.
 */
char *argstostr(int ac, char **av)
{
char *concatenated = NULL;
int total_length = 0;
int i, j, k;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++;
}
concatenated = (char *)malloc(sizeof(char) * (total_length + 1));
if (concatenated == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
concatenated[k] = '\0';
return (concatenated);
}
