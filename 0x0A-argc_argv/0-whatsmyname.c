#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments entered in the command line
 * @argv: Array holding actual string values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Program name unavailable\n");
	}
	return (0);
}
