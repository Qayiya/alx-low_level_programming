#include "main.h"

/**
 * print_most_numbers - print the numbers
 *
 * Return: 0 success
 */
void print_most_numbers(void)
{
	int x = 0;

	for (x < 10)
	{
		if (x != 2 && x != 4)
			putchar(x++ + '0');
	}
	putchar('\n');
}
