#include <stdio.h>

/**
 * mainb - function executed before main
 * Return: no return.
 *@ __attribute__: Attribute.
 */

void __attribute__ ((constructor))
mainb()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
