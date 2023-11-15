#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - it is a function that check prime number
 *
 * @n: refer to intger
 * @othrn: refer to intger
 * Return: 0 or 1 for prime intger
 *
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - a function that check numbers if the number is prime
 *
 * @n: it refer intger
 * @othrn: it refer to intger
 * Return: 0 or 1 for prime intger
 *
*/

int check_prime(int n, int othrn)
{

	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
