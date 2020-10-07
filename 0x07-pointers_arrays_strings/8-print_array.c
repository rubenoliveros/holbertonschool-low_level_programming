#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - pr function that prints the sum of the two
 *                  diagonals of a square matrix of integers.
 *
 * @a: 1st variable
 * @size: 2nd variable
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l, r;

	l = 0;
	r = 0;
	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
