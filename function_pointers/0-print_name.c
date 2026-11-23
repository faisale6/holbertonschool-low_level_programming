#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a pointer to a string containing someone's name
 * @f: A pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
