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
	s++;
	return (s - p);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
