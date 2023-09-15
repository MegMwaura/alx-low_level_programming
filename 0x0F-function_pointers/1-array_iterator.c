#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parametre
 * @array: Array to print
 * @size: Size of the array
 * @action: Pointer to the function you need to use
 * Return: Void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
