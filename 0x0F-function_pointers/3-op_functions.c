#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the result of the addition.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 *  Return: the result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 *  Return: the result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - computes the modulus of two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the modulus of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}