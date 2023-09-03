#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address to be filled
 * @b: The desired value
 * @n: bytes
 *
 * Return: Changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n++)
	{
		s[i] = b;
		s--;
	}
	return (s);
}

