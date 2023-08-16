#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to be checked
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int lastDigit;
	lastDigit = n % 10;
	_putchar (lastDigit);
	return (lastDigit);
}
