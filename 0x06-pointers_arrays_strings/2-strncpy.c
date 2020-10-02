#include "holberton.h"
/**
 * _strncpy -a function that compares two strings.
 *
 * @dest: destination
 * @src: source
 * @n: bytes to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
		*dest++ = *src++;
	if (!*src)
		while (*dest && n--)
			*dest++ = 0;
	return (ptr);
}
