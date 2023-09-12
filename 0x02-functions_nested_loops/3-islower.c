#include "main.h"

/**
 * _islower - function to check if
 * character is lowercase
 *
 * 0c: checks input of function
 *
 * Return: returns ! if 'c' is lowercase
 *		otherwise always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
