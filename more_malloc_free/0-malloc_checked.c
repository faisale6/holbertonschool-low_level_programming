#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory and checks for failiure
 * @b: Total number of bytes to allocates
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *memory;
memory = malloc(b);

if (memory == NULL)
{
exit(98);
}
return (memory);
}
