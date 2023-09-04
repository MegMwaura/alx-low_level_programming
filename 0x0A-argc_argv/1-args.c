#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Arguments in the command line
 * @argv: Array representing the actual strong value of the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int argumentCount = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		argumentCount++;
	}
	printf("Number of arguments: %d\n", argumentCount);
	return (0);
}
