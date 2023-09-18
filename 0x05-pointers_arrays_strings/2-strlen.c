#include "main.h"

/**
 * _strlen - the length of a character
 * @s: string
 * Return: value of s
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}
