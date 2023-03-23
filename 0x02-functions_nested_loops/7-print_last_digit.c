#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number..
 *
 * @n: chechs input of function
 *
 * Return: Returns the value of the last digit.
*/

int print_last_digit(int n)
{
	int lD;

	if (n < 0)
		lD = -n % 10;
	else
		lD = n % 10;

	_putchar(lD + '0');
	return (lD);
}
