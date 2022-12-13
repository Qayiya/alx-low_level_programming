#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a =  1; a < 100; a++)
	{
		putchar(a + '0');
		if  (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
