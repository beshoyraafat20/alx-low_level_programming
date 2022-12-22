#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string
 * Return: char*
 */
char *leet(char *str)
{
	int i = 0;
	int ch[52];

	ch[0] = 4;
	ch[32] = 4;
	ch[4] = 3;
	ch[36] = 3;
	ch[14] = 0;
	ch[46] = 0;
	ch[11] = 1;
	ch[43] = 1;
	ch[19] = 7;
	ch[51] = 7;

	while (*(str + i) != '\0')
	{
		char c = *(str + i);

		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o'
			|| c == 'O' || c == 't' || c == 'T' || c == 'l' || c == 'L')
			*(str + i) = '0' + ch[c - 'A'];
		i++;
	}

	return (str);
}
