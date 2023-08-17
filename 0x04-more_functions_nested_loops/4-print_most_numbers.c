#include "main.h"

/**
 * prints_most_numbers - prints numbers from 0 to 9
 * Description - prints the numbers excluding 2 and 4
 * Returns: numbers from 0 up to 9
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	if (num == 2 || num == 4)
	{
	continue;
	}
	else
	{
	_putchar(num + '0');
	}
	}
	_putchar('\n');
}	
