#include <stdio.h>
/**
 * main - entry function for program
 *
 * Return: 0
 */
int main(void)
{
	int i, j, q;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (q = j + 1; q < 58; q++)
			{
			putchar(i);
			putchar(j);
			putchar(q);
			if (i == 55 && j == 56 && q == 57)
			continue;
			else
			putchar(44);
			putchar(32);
			}
		}
	}
putchar(10);
return (0);
}
