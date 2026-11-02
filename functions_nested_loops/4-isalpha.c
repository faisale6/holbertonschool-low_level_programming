#include "main.h"
/**
 * _isalpha - Checks either a letter is uppercase or lowercase
 *
 * @c:  - the character to check
 *
 * Return: 1 if letter is uppercase or lowercase
 * else Return 0
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
