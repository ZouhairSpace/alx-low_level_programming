#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: check the value of a.
 * @b: check the value of b
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
