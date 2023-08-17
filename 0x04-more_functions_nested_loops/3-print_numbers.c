#include "main.h"

/**
 * print_numbers - Prints numbers 
 * @num: represent the numbers to be displayed
 * Return: numbers form zero to nine
 */

void print_numbers(void)
{
	int num;

	for(num = 48; num < 58; num++)
	{
	_putchar(num);
	}
	_putchar('\n');
}	
