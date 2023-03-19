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

	while (n <= 56)
	{
		int m = 49;

		while (m <= 57)
		{
			putchar(n);
			putchar(m);
			putchar(44);
			putchar(32);
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}


