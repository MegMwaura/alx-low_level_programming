#include "main.h"

/**
 * _strchr - Entry point of the program
 * @s: Input
 * @c: Input
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}

	}
	return (0);
}
