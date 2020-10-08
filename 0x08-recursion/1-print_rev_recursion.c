#include "holberton.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 *
 * @s: Variable
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
