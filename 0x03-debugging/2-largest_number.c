nclude "main.h"

/**
 * larget_number- return largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
