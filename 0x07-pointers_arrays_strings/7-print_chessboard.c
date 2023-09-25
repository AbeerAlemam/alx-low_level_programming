#include "main.h"

/**
 * void print_chessboard - a function that prints the chessboard
 *
 * @s: row size
 * 
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
