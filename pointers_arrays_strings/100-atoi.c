#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: Converted integer, or 0 if invalid
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	int limit, digit;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	limit = (sign == -1) ? INT_MIN : -INT_MAX;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result < limit / 10 ||
		    (result == limit / 10 && digit > -(limit % 10)))
			return (0);
		result = result * 10 - digit;
		i++;
	}

	if (sign == -1)
		return (result);
	return (-result);
}
