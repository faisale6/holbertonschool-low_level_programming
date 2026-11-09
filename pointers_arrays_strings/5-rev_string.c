#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: Pointer that directs the string.
 */

void rev_string(char *s)
{
int length = 0;
int i = 0;
char temp;

while (s[length] != '\0')
{
length++;
}

while (i < length / 2)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
i++;
}
}
