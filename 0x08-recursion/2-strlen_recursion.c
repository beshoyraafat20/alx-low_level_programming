#include <stdio.h>

/**
 * _strlen_recursion - calculates the length of a string using recursion
 * @s: pointer to string to be measured
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
