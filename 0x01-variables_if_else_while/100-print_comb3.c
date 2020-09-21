#include <stdio.h>
/**
 * main - entry function for program
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
		if (i != j && i < j)
		putchar(i);
		putchar(j);
		if (i == 56 && j == 57)
		continue;
		else
		putchar(44);
		putchar(32);
		}
	}
putchar(10);
return (0);
}
