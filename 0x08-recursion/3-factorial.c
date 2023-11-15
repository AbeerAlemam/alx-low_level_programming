#include "main.h"

/**
 * factorial - a it is a function that returns the
 * factorial of a given number
 *
 * @n: it is refer to intger
 * Return: factorial (intger)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
