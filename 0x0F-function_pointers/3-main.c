#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point. Evaluates arithmetic operations.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opt = get_op_func(argv[2]);

	if (!opt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
