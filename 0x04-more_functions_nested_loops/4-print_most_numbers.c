#include "main.h"

/**
 * print_most_numbers - print the numbers
 *
 * Return: success
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			putchar(x + '0');
	}
	putchar('\n');
}
