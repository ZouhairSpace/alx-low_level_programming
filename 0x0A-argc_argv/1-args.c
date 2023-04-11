#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: nb of arguments.
 * @argv: array of arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
