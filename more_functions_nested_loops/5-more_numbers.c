#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 */

void more_numbers(void)
{
int numbers;
int i;

for (i = 0; i < 10; i++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers >= 10)
{
_putchar(numbers / 10 + '0');
}
_putchar(numbers % 10 + '0');
}
_putchar('\n');
}
}
