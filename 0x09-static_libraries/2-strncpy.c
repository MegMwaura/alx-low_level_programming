#include "main.h"

/**
 * _strncpy - Copiess a string
 * @dest: Input value
 * @src: Input value
 * @n: n bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
