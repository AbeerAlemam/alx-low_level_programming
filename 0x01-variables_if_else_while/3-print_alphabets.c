#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase and in uppercase.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchgar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
