# include "main.h"
# include <stdio.h>

/**
 * print_sign -  a function that prints the sign of a number.
 *
 * @n: integer number
 *
 * Return: if posetive number 1, if negtive number -1
 * or if zero 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
