#include "holberton.h"

/**
* *_strcpy - a function that copies the string pointed to by src,
*            including the terminating null byte (\0),
*            to the buffer pointed to by dest.
*
* @dest: 1st variable
* @src: 2nd variable
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (src[counter] != 0)
		counter++;
	for (i = 0; i < counter; i++)
		dest[i] = src[i];
	return (dest);
}
