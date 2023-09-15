#include "main.h"

/**
 * _isdigit - checks if c is digit 0 - 9
 *
 * @c: is input for digit
 *
 * Return: 1 if it is digit, 0 is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
