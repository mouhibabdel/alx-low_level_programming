#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int n, j;
for (n = 0; n < 24; n++)
{
for (j = 0; j < 60; j++)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(':');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
putchar('\n');
}
}
return (0);
}
