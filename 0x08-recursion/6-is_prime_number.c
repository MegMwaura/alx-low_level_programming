#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Return if a number is prime
 * @n: the numberto be checked
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if number is prime
 * @n: number to be checked
 * @i: iteration
 * Return: 1 for prime 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
	return (0);
}
