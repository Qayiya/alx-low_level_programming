#include "main.h"

/**
 * more_numbers - prints  0 to 14 ten times
 * Return: always 0
 */

void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 9; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar((num / 10) + '0');
			}
			putchar((num % 10) + '0');
		}

		putchar('\n');
	}
}
