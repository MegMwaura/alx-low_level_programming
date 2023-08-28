#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: character to be located
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
