#include "main.h"

/**
 * _memset - Entry point of the program
 * @s: Pointed destination area
 * @b: Constant byte
 * @n: Bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
