#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * @n: variable
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src && n--)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
