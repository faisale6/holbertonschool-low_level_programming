#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 */

void print_alphabet(void)
{
int letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
