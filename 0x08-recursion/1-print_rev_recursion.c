#include "main.h"

/**
 * _print_rev_recursion - it is a function that prints every string in reverse
 *
 * @s: it is a pointer to the string
 * Return: nothing (void)
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
