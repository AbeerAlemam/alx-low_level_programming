#include "main.h"

/**
 * _strlen_recursion - t is a function that returns the value of the
 * length of a string.
 *
 * @s: refer to string
 * Return: the value of length of the intger
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}

	return (length);
}
