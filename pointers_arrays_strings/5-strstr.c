#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: Main string to be searched
 * @needle: Substring to search for
 *
 * Return: Pointer to the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
