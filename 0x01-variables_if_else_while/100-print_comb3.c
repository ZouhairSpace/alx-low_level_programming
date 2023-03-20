#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;
	int m = 49;
	int z;

	while (n <= 56)
	{
		z = m;
		while (z <= 57)
		{
			putchar(n);
			putchar(z);
			if (n == 56 && z == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
			z++;
		}
		z = m++;
		n++;
	}
	putchar('\n');
	return (0);
}
