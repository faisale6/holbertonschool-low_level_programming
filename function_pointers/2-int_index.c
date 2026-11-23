#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: Number of elements in the array
 * @cmp: pointer to the function to compare
 * @array: pointer to the array
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
