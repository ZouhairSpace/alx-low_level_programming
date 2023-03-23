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
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
