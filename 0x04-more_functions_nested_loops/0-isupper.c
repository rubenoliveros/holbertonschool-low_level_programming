#include <stdio.h>
/**
 * _isupper - a function that checks for uppercase character.
 * 
 * @c: variable used
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
