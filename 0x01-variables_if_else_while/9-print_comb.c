#include <stdio.h>
/**
 * main - Prints out possible combinations of single digit numbers 
 *
 * Result: 0(Success)
 */
int main(void)
{
	int number = 0;
	while (number <= 9)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
