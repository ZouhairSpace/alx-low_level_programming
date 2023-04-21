#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - calculates the sum of all its integer parameters
* @n: number of integer arguments
* Return: sum of integer arguments or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
