#include "holberton.h"
/**
 * _islower - a function that checks for lowercase character.
 *
 *
 * Return: Returns 1 if a lowercase number, returns 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
