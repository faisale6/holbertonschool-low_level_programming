#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: A pointer to destination memory
 * @src: A pointer to the source memory
 * @n: Exact number of byes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
