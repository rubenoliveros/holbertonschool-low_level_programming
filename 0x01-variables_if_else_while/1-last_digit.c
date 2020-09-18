#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* mn - Find the last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = abs(n % 10);
	if (lst > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	} else if (lst == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst);
	} else if (lst < 6 && lst != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	}
	return (0);
}
