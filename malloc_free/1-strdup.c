#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string using dynamically allocated memory.
 * @str: pointer to the original string
 *
 * Return: Pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
unsigned int i;
char *copy;
i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
i++;
}

copy = malloc(i + 1);

if (copy == NULL)
{
return (NULL);
}
i = 0;

while (str[i] != '\0')
{
copy[i] = str[i];
i++;
}
copy[i] = '\0';
return (copy);
}
