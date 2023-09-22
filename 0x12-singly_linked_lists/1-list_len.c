#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Poiner to the list
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	
	return (count);
}
