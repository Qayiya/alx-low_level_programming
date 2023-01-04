#include "main.h"

/**
 * _puts - prints a string follow by
 * a new line
 * @str: pointer to the string to print
 * Return: success 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n')
}
