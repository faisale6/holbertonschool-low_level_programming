#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with c
 * @size: number of characters to allocate
 * @c: character used to initialize the array
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
