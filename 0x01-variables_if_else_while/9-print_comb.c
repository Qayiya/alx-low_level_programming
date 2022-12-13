#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	int tens;
	int ones;

	for (ones =  1; ones <= 9; ones++)
	{
		putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
