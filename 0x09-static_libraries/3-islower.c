#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: chechs input of function
 *
 * Return: returns 1 if 'c' is lowercase.otherwise always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
