#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Difference between the first unequal characters, or 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
