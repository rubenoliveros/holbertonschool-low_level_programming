#include "holberton.h"
/**
 * print_rev - a function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @s: variable
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar(10);
}
