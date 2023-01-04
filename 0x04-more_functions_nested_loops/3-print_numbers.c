#include "main.h"

/**
 * print_numbers - print seleceted numbers
 * Return: 0 success
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
		putchar(x++ + '0');

	putchar('\n');
}
