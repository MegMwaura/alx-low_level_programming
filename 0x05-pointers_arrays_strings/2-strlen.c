#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: the string to get the length of
 * Return: The length of *s
 */

size_t _strlen(const char *s)

{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
