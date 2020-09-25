#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime factor of
 *       the number 612852475143, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	long i, j;

	j = 612852475143;
	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			j = j / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
