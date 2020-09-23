#include "holberton.h"
/**
 * print_sign - a function that prints the sign of a number.
 *
 *
 * Return: 1 if number positive, 0 if zero, -1 if under zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
