#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums of all parameters
 * @n: Number of integers to add
 * @...: Accepts a variable number of additional arguments
 *
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
