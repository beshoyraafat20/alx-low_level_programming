# include "main.h"
# include <stdio.h>
# include <ctype.h>

/**
 * _isalpha - checks whether a character is lowercase alphabet (a-z) or not.
 *
 * @c: character in ASCII code
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
