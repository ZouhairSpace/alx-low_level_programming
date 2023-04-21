#ifndef VARIADIC_FUNCTIONS_HEADER
#define VARIADIC_FUNCTIONS_HEADER

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct p - struct for checking argument type
 * @p: possibility
 * @f: function to be used
 */

typedef struct p
{
	char *p;
	void (*f)(va_list);
} checker;

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

#endif /* VARIADIC_FUNCTIONS_HEADER */
