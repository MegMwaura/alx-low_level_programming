#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all elements af a list
 * @h: Pointer to the list to be printed
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	for (; h != NULL; h=h->next)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u]%s/n", h->len, h->str);
		}
		node_count++;
	}
	return (node_count);
}
