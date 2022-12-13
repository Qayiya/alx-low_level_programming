#include <stdio.h>

/**
 * main - Code entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c-)
		putchar(c);
	putchar('\n');
	return (0);
}
