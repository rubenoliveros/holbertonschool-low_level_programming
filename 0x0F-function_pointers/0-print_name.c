#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: 1st variable
 * @f: 1st function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
