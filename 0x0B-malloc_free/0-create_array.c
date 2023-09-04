#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars of size size and assigns char
 * @size: Size of array
 * @c: Char to assign
 * Return: Pointer to the array, 0 if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
