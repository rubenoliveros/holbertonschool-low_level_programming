#include "holberton.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *
 * @c: variable used
 *
 * Return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
