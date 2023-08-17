#include "main.h"

/**
 * times_table - Prints 9 times table starting from zero
 */

void times_table(void)
{
	int multiplier = 0;

	while (multiplier <= 9)
	{
		int result = multiplier * 9;

		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	_putchar('\n');
	multiplier ++;
}
