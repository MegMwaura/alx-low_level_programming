#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates to new memory space allocation
 * @str: String
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *meg;

	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	meg = malloc(sizeof(char) * (i + 1));

	if (meg == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		meg[r] = str[r];

	return (meg);
}
