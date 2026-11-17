#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to allocate
 * @size: number of bytes per element
 *
 * Return: pointer to the newly allocated, zero initialised memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *memory;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

if ((size_t)nmemb > (size_t)-1 / size)
return (NULL);

memory = malloc(nmemb * size);

if (memory == NULL)
{
return (NULL);
}

for (i = 0; i < nmemb * size; i++)
{
memory[i] = 0;
}

return (memory);
}
