
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguments of different types
 * @format: String specifying the types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int printed = 0;
	int valid;
	va_list args;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		valid = 0;

		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				valid = 1;
				break;
			default:
				break;
		}

		if (valid && printed)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}

		printed = printed || valid;
		i++;
	}

	va_end(args);
	printf("\n");
}
