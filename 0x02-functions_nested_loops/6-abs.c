#include "holberton.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 *
 *
 * Return: Returns absolute value.
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
