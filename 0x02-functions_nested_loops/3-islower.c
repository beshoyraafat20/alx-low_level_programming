# include "main.h"
# include <stdio.h>
# include <ctype.h>

/** 
 * _islower(int c) - checks whether a character is lowercase alphabet (a-z) or not.
 * 
 * Returns 1 if c is lowercase
 * 
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (islower(c) > 0 )
	
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
