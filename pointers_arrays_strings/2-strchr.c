#include <stddef.h>
#include "main.h"
/**
 * _strchr - Loactes a character in a string
 * @s: string to search
 * @c: The character to search for
 *
 * Return: pointer to the character or NULL
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
if (c == '\0')
{
return (&s[i]);
}
return (NULL);
}
