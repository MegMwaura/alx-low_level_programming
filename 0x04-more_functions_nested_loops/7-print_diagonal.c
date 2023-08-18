#include "main.h"

/**
 * print_diagonal - Prints a diagonal line according to the parametre given
 * @n: Number of times diagonal lines should be drawn
 * Return: Empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
