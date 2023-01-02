#include "main.h"

/**
 * main - print last digit
 *
 * Return: 0 success
 */
int print_last_digit(int)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	return (0);
}
