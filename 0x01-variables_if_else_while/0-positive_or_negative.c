#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print whether the number stored is positive or negative
 *
 * return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positfive\n");
	}
	if (n == 0)
	{
		printf("%d is zero\n");
	}
	if (a < 0)
	{
		printf("%d is negative\n");
	}
	return (0);
}
