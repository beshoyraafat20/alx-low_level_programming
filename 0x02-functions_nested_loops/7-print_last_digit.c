# include "main.h"
# include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n:number.
 * Return: last digit x.
 */


int print_last_digit(int n)
{
	_putchar((abs(n) % 10));
	return (abs(n) % 10);
}
