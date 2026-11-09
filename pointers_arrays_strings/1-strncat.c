#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to append
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
