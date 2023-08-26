#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *str)
{
int i, j;
char n1[] = "aAeEoOtTlL";
char n2[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == n1[j])
{
str[i] = n2[j];
}
}
}
return (str);
}
