#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	int ones;

	for (ones =  1; ones <= 9; ones++)
	{
		putchar(ones);
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
