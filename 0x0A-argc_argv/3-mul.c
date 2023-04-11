#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: nb of arguments.
 * @argv: array of arguments.
 *
 * Return: If the program receives arguments return 0.
 *         If the program does not receive arguments return 1.
 */
int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);

	return (0);
}
