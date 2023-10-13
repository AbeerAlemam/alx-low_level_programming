#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *pls;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	pls = malloc(sizeof(char) * (i + 1));

	if (pls == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		pls[n] = str[n];

	return (pls);
}
