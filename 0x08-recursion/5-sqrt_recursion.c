#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 *	the natural square root of a number
 * @n: intger
 * @val: root
 * Return: intger
 *
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function that give the squar root
 * @n: intger
 * @val: root
 * Return: intger
 *
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
