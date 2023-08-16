#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int repetitions = 10 ;

	while (i < repetitions)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
