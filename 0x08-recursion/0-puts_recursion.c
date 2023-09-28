#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s: pointer to the string
 * Return: nothing
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
		_put_recursion(s + 1);
	}
}
