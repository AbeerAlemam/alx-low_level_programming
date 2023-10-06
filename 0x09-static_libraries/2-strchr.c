#include "main.h"

/**
 * char *_strchr - locates a character in a string
 *
 * @s: length of memiry
 * @c: memory area  pointer to put the contant
 *
 * Return: pointer to dest
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
