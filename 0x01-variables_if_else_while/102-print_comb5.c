#include <stdio.h>
/**
 * main - Check sign on int
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(32);
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98 && j == 99)
			continue;
			else
			putchar(44);
			putchar(32);
		}
	}
putchar(10);
return (0);
}
