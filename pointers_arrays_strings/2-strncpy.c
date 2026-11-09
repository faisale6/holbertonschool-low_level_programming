#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: the amount of characters to copy
 *
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}

while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
