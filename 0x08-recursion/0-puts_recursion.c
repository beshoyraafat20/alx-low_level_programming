#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line, using recursion
 * @s: pointer to string to be printed
 */
void _puts_recursion(char *s)
{
    // Base case: end of string reached
    if (*s == '\0')
    {
        // Print new line
        putchar('\n');
        return;
    }

    // Recursive case: end of string not reached
    else
    {
        // Print current character
        putchar(*s);

        // Move to next character in string and recursively call _puts_recursion()
        _puts_recursion(s + 1);
    }
}

int main(void)
{
    _puts_recursion("Hello, world!");
    return 0;
}
