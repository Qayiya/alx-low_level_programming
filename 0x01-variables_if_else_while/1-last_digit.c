#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main - entry
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int x;

	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d abd is greater tha 5\n", n, x);
	if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	if (x < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0)
}
