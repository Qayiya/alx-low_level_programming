#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: diagonal should end with n
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			putchar(' ');

		putchar('\\');
		putchar('\n');
	}
}
