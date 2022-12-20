# include <stdio.h>
# include <string.h>
# include "main.h"


void print_rev(char *s)
{
	len = strlen(*s);
	left = 0;
	right = len - 1;

	for (i = left; i <right; i++)  
	{  
        	temp = *s[i];  
		*s[i] = *s[right];  
		*s[right] = temp;  
		right--;  
	}  
    printf ("%s",  str);
}
