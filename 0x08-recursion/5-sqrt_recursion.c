#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Number to calculate natural square root
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root of a number
 * @n: Number to calculate square root
 * @i: Iteration
 *
 * Return: natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
	return (0);
}
