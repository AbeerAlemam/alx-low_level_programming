#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase from z - a.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
