#include "function_pointers.h"

/**
 * int_index - Returns index of the first elemnt for which the cmp returns 0
 * @array: Array
 * @size: Number of elemnts in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
