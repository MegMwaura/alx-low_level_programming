#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary number to usigned integer
 * @b: Binary string character to be converted
 * Return: Converted number, 0 if b is NULL or if b is not equal to 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
