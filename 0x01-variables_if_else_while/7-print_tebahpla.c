#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
