#include "main.h"

/**
 * char *_strcat - concatenates two strings
 *
 * @src: point to source input
 * @dest: point to destination input
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)

		dest[c++] = src[c2];

	return (dest);
}
