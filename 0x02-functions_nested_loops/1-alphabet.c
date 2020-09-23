#include "holberton.h"

/**
 * main - print_alphabet
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
	return;
}
