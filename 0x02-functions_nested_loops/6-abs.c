#include "main.h"

/**
 * _abs is a function calculates the abs of n
 *
 * @n: takes intger type input for function.
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);

}
