#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array of integers to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to use to compare elements
 * Return: index of the first element for which cmp function returns non-zero
 * or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) == 1)
			return (index);
	}
	return (-1);
}
