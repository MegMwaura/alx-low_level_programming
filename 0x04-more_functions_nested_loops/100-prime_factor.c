#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Prints largest prime factor of the number 612852475143
 * Returns: Always 0 (Success)
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld", maxf);
	return (0);
}
