#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;
	int word = 1;

	while (*(str + i) != '\0')
	{
		char c = *(str + i);

		if (c == ' ' || c == '\n' || c == ',' || c == ';' || c == '\t'
			|| c == '.' || c == '!' || c == '?' || c == '"'
			|| c == '(' || c == ')' || c == '{' || c == '}')
			word = 1;
		else if (word == 1 && (c >= 'a' && c <= 'z'))
		{
			*(str + i) = 'A' + (c - 'a');
			word = 0;
		}
		else if (word == 1 && ((c >= 'A' && c <= 'Z')
				|| (c >= '0' && c <= '9')))
		{
			word = 0;
		}

		i++;
	}

	return (str);
}

