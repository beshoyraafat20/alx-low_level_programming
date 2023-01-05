#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line, using recursion
 * @s: pointer to string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
