#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that returns the sum of two numbers
 * @a: number
 * @b: number
 *
 * Return: sum of a and b numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of two numbers
 * @a: number.
 * @b: number.
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of two numbers
 * @a: number
 * @b: number
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that eturns the remainder of the
 * division of two numbers
 * @a: number
 * @b: number
 *
 * Return: mode of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
