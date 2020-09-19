#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point function
 *
 *
 * Return: always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	printf("Last digit of %i is %i ", n, r);
	if (r > 5)
		printf("and is greater than 5\n");
	else if (r < 6 && r != 0)
		printf("and is less than 6 and not 0\n");
	else if (r == 0)
		printf("and is 0\n");
	return (0);
}
