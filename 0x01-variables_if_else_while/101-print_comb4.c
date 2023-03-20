#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			if (j <= i)
				continue;
			for (k = 50; k <= 57; k++)
			{
				if (k <= j)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

