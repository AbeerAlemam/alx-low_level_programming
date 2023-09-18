#include "main.h"

/**
 * _strlen - a function that returns the length of a strins
 * @s: string
 * return: length of a strins
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
