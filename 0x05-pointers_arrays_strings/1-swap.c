#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer swap
 * @b: integer swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
