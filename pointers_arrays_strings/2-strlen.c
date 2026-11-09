#include "main.h"
/**
 * _strlen - returns the length of a string
 *@s: - Pointer to the string being measured
 * Return: Length of the string
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
s++;
length++;
}
return (length);
}

