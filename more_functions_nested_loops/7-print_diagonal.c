#include "main.c"
/**
 * print_diagonal - draws a diagonal line
 * @n: Number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int n;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
