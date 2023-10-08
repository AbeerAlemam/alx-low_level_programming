#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);

	if (r == NULL)
		exit(98);

	return (r);
}
