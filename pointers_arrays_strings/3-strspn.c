#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string counting characters from
 * @accept: string containing allowed characters
 * i - move through s
 * j - move through accept
 * Return: number of consecutive accepted characters.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{

break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
i++;
}
return (i);
}
