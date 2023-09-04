#include <stdio.h>
#include "main.h"

/**
 * _putchar - Prints the character c to stdout
 * @c: Character to print
 *
 * Return: On success 1,
 * On error, -1 is returned and errno is set appropriately.
 */

int _puthcar(char c)
{
	return (write(1, &c, 1));
}
