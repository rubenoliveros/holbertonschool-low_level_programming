#include "holberton.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: 1st variable
 * @src: 2nd variable
 * @n: 3rd variable
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
