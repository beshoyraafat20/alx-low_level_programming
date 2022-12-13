# include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n:number.
 * Return: last digit x.
 */


int print_last_digit(int n)
{
	int r;

	if (n < 0)

		r = -1 * (n % 10);

	else
		r = n % 10;
	_putchar ((r % 10) + '0');
	return (r % 10);
}
