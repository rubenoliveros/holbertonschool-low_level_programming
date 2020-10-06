#include "holberton.h"
/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: 1st variable
 * @c: 2nd variable
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
