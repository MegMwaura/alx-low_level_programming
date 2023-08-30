#include "main.h"

/**
 * _strlen_recursion - Returns the length os a string
 * @s: String
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: String
 * @n1: Smallest iterator
 * @n2: Biggest operator
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (0);
		}
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Determines if string is palindrome or not
 * @s: String
 * Return: 1 if s is a palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, _strlen_recursion(s) - 1));
}