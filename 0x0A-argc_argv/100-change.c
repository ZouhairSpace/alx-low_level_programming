#include <stdio.h>
#include <stdlib.h>

/**
 * main - the minimum number of coins to make change for an amount of money.
 * @argc: arguments counter
 * @argv: array vof arguments
 * Return: 0 success 1 error
 *
 */

int main(int argc, char *argv[])
{
	int money, nbcents, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	nbcents = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			nbcents++;
			money -= coins[i];
		}
	}

	printf("%d\n", nbcents);
	return (0);
}
