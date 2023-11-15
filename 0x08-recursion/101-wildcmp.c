#include "main.h"

/**
 * wildcmp - it is a function that compares two strings
 *
 * @s1: refers to string params
 * @s2: refer to string params
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
