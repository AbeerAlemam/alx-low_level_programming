#include "main.h"

/**
 * swap_int - swaps the values of two intgers
 * and updates the value it points to 98
 * @a: intger to swap
 * @b: intger to swap
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
