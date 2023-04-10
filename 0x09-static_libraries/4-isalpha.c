#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: chechs input of function
 *
 * Return: returns 1 if 'c' is letter.otherwise always 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
