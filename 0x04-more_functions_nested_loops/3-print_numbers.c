#include "main.h"

/**
 * print_numbers - print given numbers
 * Return: success
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
	return (0);
}
