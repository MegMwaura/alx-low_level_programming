#include "main.h"

/**
 * print_most_numbers - Prints numbers zero to nine excluding two and four
 * @num: represents the numbers
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
	_putchar(num + '0');
	}
	_putchar('\n');
}
