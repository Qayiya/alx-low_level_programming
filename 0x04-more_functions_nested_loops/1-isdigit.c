#include "main.h"

/***
 * _isdigit - checks if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else 
{
return (0);
}
_putchar('\n');
}
