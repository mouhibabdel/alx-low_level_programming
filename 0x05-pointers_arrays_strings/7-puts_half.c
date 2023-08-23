#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int n;
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
str -= length;
n = length / 2;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
