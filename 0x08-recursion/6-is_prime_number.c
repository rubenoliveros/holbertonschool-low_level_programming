#include "holberton.h"
/**
 * prime_check - checks to see if number is prime
 *
 * @i: 1st variable
 * @j: 2nd variable
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int i, int j)
{
	if (i < 2 || i % j == 0)
		return (0);
	else if (j > i / 2)
		return (1);
	else
		return (prime_check(i + 1, j));
}
/**
 * is_prime_number - Write a function that returns 1 if the input
 *                   integer is a prime number, otherwise return 0.
 *
 * @n: 1st variable
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
