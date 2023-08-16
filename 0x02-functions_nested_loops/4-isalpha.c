#include "main.h"

/**
 * _isalpha - Checks for alphabetic haracter
 * @c: Checks the character
 * Return: 1 if character is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
