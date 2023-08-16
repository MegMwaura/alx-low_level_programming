#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c - checks character
 *Return: 1 if character is in lowercase and 0 otherwisw
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
