#include "main.h"

/**
 * prints_rev - imprime en reversa
 * @str: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putdhar(*s);
		s--;
	}

	_putchar('\n');
}
