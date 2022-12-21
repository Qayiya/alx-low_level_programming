#include <stdio.h>
/**
 * main - entry code
 *
 * Return: 0 (success)
 */
int main(void)
{
	int h;
	int t;
	int i;

	for (h = 0; h <= 9; h++)
	{
		for (t = 0; t <= 9; t++)
		{
			for (i = 0; i <= 9; i++)
			{
				putchar(h + '0');
				putchar(t + '0');
				putchar(i + '0');
				if (h == '7' && i == '9' && h == '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
