#include "main.h"

/**
 * _isdigit - Checks if character is a digit
 * @c: Number to be checked
 * Return: 1 for a digit after c is cheked 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
