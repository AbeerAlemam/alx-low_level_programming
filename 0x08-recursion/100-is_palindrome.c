#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - it a function that
 * checks if a string is a palindrome
 * @s: refer to string to reverse
 *
 * Return: the value of 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - it is a function that
 * returns the length of a string
 * @s: string
 *
 * Return: the value of length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - it is a function that checks the
 * characters recursively for palindrome
 * @s: refers to string to check
 * @i: refer to iterator
 * @len: refers to length of the string
 *
 * Return: 1 if palindrome, 0 if no
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));
}
