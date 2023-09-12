#include "main.h"

/**
 * _abs : function computes the abs of a number.
 *
 * c takes intger type input for function.
 *
 * Return: Always 0 (success)
*/

int print_last_digit(int n);
{
	int lastDigit;

	if (n > 0)
		lastDigit = -1 * (n % 10);

	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
