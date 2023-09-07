#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: n number of bytes
 * Return: Pointer to the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int concatLen = (n >= len2) ? (len1 + len2) : (len1 + n);
	char *s = (char *)malloc(concatLen + 1);

	if (s1 != NULL)
	{		
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}

	if (s != NULL)
	{
		if (s1 != NULL)
		{
			strncpy(s, s1, len1);
		}
		if (s2 != NULL)
		{
			strncat(s + len1, s2, (n < len2) ? n : len2);
		}
		s[concatLen] = '\0';
	}

	return (s);
}
