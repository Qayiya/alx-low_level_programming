#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int h, tri;

	if (size > 0)
	{
		for (h = 1; h < size; h++)
		{
			for (tri = size - h; tri > 0; tri--)
				putchar(' ');
			for (tri = 0; tri < h; tri++)
				putchar('#');
			if (h == size)
				continue;

			putchar('\n');
		}
	}

	putchar('\n');
}
