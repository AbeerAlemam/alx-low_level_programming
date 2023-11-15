#include "main.h"

/**
 * _puts_recursion - It is a function that prints a string,
 * followed by a new line
 *
 * @s: is a pointer refer to the string
 * Return: nothing (void)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
