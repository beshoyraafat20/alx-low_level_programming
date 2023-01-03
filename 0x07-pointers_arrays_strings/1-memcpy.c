#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
