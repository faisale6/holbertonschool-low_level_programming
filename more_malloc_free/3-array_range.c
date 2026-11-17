#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of consecutive integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the array or NULL on failure
 */
int *array_range(int min, int max)
{
	size_t count = 0;
	size_t i;
	int *array;
	int value;

	value = min;
	i = 0;

	if (min > max)
	{
		return (NULL);
	}
	count = (size_t)((unsigned int)max - (unsigned int)min) + 1;

	if (count > (size_t)-1 / sizeof(int))
	{
		return (NULL);
	}

	array = malloc(count * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < count)
	{
		array[i] = value;
		i++;
		if (i < count)
			value++;
	}
	return (array);
}
