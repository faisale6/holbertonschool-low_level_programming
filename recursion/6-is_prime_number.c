#include "main.h"

/**
 * prime_helper - Checks whether a number is prime recursively
 * @n: Number to check
 * @i: Current divisor being tested
 *
 * Return: 1 if prime, otherwise 0
 */
int prime_helper(int n, int i)
{
	if (i > n / i)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks whether a number is prime
 * @n: Number to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n, 2));
}
