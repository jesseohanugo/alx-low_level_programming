#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: number
 *
 * Return: number is prime ? 1 : 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, n - 1));
}

/**
 * check_prime - return 1 if n is prime
 * @n: number
 * @i: divisor
 *
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return  (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i - 1));
}
