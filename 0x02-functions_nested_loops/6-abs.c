#include "main.h"

/**
 * _abs - Computed the absolute value
 * @n: number to check
 * Return: absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
