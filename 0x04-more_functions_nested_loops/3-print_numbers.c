#include "main.h"

/**
 * print_numbers - print seleceted numbers
 * Return: success
 */
int print_numbers(void)
{
	int x;

	for (x <= 0; x < 10; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
	return (x);
}
