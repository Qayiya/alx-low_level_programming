#include "main.h"

/**
 * print_line - print the number
 * @n: the number of '_' to be printed
 * Return: 0 success
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('_');
	}

	putchar('\n');
}
