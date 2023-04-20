#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: pointer to the start of the memory address to print opcodes from
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int adr;

	for (adr = 0; adr < n; adr++)
	{
		printf("%.2hhx", a[adr]);
		if (adr < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: O
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
