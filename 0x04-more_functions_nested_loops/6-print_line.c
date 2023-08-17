/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
int n1;
if (n <= 0)
{
_putchar('\n');
}
for (n1 = 0; n1 < n; n1++)
{
_putchar('_');
}
_putchar('\n');
}
