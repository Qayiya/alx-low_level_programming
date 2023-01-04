#include "main.h"

/**
 * print_most_numbers - print the numbers
 *
 * Return: 0 success
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
			putchar(x + '0');
		x++;
	}
	putchar('\n');
}
