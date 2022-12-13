#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - 10 times the alphabet in lowercase.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i < 10 ; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
