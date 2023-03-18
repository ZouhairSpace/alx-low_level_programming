#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
