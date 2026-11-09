#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: Pointer to the string being measured
 */

void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
i = length / 2;
if (length % 2 != 0)
{
i++;
}
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
