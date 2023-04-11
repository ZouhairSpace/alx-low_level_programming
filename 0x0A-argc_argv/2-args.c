#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: nb of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
