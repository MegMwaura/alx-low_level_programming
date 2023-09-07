#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: bytes to allocate
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
