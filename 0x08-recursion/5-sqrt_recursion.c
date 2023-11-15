#include "main.h"

/**
 * _sqrt_recursion - it is a function that returns
 *	the natural square root of a number
 * @n: it refer to intger
 * @val: the value of the root
 * Return: intger
 *
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - it is a function that give the squar root
 * @n: refer to intger
 * @val: refer to root
 * Return: to intger
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
