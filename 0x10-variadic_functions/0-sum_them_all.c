#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: parameters's number
 * @...: intger
 *
 * Return: If n == 0 - 0
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i = n;
	int sum = 0;

	if (!n)
	{
		return (0);
	}
	va_start(a, n);
	while (i--)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
