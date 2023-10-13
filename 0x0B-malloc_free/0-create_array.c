#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates array of size size and assign char
 * @size: size of array
 * @c: char
 * Return: pointer to array, or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
