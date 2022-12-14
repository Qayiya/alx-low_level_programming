#include "main.h"

/**
 * print_last_digit - print last digit
 * @num: last number to be printed
 * Return: print last digit of @num
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
	_putchar(last_digit + '0');

	return (last_digit < 0 ? -1 * last_digit : last_digit);
}
