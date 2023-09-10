#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers 0-9.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*digit ti ASKII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
