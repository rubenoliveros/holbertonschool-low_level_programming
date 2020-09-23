#include "holberton.h"

/**
 * print_alphabet  - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar(10);
}
