#include "variadic_functions.h"

/**
 * print_strings -  prints a given number of strings separated by a string
 * @separator: string to be printed between strings
 * @n: number of string arguments
 * @...: The list of numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(args, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(args);
}
