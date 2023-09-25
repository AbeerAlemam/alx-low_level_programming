#include "main.h"

/**
 * *_memset - that fills memory with a constant byte
 *
 * @s: pointer to put the constant
 * @n: constant
 * @b: the bigest byte
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}

	return (s);
}
