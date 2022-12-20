#include "main.h"

/**
 * print_rev - a function that prints a string.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int x = 0;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}

	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
