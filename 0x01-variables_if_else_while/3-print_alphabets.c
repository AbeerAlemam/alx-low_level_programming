#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase andin uppercase.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchgar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
