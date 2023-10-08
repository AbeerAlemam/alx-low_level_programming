#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int j = 0, i = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		c = malloc(sizeof(char) * (l1 + n + 1));
	else
		c = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!c)
		return (NULL);

	while (i < l1)
	{
		c[i] = c1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		c[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
