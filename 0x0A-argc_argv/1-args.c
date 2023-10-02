#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed
 * @argc: int
 * @argv: list (array)
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
