#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i; 
	int j;
	int k;
	int h;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
		       for (k = 48; k <= 57 ; k++)
		       {
				for (h = 49; h <= 57; h++)
				{
			 		if (h+k <= i+j || k<i)
						continue;
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(h);
					if (i = 57 && j = 56 && k = 57 && h = 57)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
