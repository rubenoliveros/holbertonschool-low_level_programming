#include "holberton.h"
/**
 * _pow_recursion - Write a function that returns the value
 *                  of x raised to the power of y.
 *
 * @x: 1st variable
 * @y: 2nd variable
 *
 * Return: x ^ y, -1 if y < 0, 1 if y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
