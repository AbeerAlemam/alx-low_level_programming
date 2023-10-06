#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, g, re;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	re = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && num >= 0; g++)
	{
		while (num >= coins[g])
		{
			re++;
			num -= coins[g];
		}
	}

	printf("%d\n", re);
	return (0);
}
