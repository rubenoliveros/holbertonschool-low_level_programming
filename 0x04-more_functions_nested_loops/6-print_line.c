#include "holberton.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 *              If n is 0 or less, the function should only print \n.
 *
 * @n: integer used in function.
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i += 1)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
