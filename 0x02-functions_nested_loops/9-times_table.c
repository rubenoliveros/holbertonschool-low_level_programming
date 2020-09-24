#include "holberton.h"
/**
 * times_table - a function that prints the 9 times table,
 *                   starting with 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(j + '0');
			}
			else if (j * i <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(j * i + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((j * i) / 10 + '0');
				_putchar((j * i) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
