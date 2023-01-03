#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer to string s
 * @c: the first character of string s
 *
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));

}
