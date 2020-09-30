#include "holberton.h"

/**
* puts_half - a function that prints half of a string,
*             followed by a new line.prints second half of a string
*
* @str: variable
*
* Return: void
*/

void puts_half(char *str)
{
	int counter = 0;
	int i;
	int odd;

	while (str[counter] != '\0')
		counter++;
	odd = counter;
	if (odd % 2 == 1)
	{
		for (i = (counter + 1) / 2; i < counter; i++)
			_putchar(str[i]);
		_putchar(10);
	}
	else
	{
		for (i = (counter) / 2; i < counter; i++)
			_putchar(str[i]);
		_putchar(10);
	}
}
