#include "main.h"

/**
 * _isalpha - function to checks if character is a ltter
 *	uppercase or lowercase
 *
 * @c: takes input from other function.
 *
 * Return: 1 is c if turn else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
