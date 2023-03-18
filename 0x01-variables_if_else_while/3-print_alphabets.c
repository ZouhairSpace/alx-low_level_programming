#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description:'prints the alphabet in lowercase, and then in uppercase'
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

