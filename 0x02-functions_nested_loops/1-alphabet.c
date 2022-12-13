#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 0;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i < 26; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');

}
