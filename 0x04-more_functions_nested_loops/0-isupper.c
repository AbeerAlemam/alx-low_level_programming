#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c:is input for character
 *
 * Return: 1 if it is upper, 0 is not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
