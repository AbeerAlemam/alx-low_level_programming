#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that splits a string into words
 * @ac: intger input
 * @av: double
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, y = 0, x = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			x++;
	}
	x += ac;

	s = malloc(sizeof(char) * x + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		s[y] = av[i][n];
		y++;
	}
	if (s[y] == '\0')
	{
		s[y++] = '\n';
	}
	}
	return (s);
}
