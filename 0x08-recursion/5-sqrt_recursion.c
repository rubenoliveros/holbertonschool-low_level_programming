#include "holberton.h"
/**
 * sqrt_check - checks for the square root of c
 * @i: 1st variable
 * @j: 2nd variable
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_check(i + 1, j));
}

/**
 * _sqrt_recursion - Write a function that returns
 *                   the natural square root of a number.
 *
 * @n: 1st variable
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
