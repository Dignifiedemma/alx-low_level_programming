#include "main.h"
/**
 * is_prime - function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: number to be checked
 * @start: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
 *
 */

int is_prime(int n, int start)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)

{
	int start = n / 2;

	if (start <= 1)
		return (0);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
