#include <stdio.h>
/**
 * main - entry function for program
 *
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, q;

	for (i = 48; i < 58; i++)
	{
		for (q = 48; q < 58; q++)
		{
			putchar(i);
			putchar(q);
			if (q == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
