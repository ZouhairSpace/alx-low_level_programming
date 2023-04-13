#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates and intiializes an array of chars.
 * @size: nb of elements in the array
 * @c: char
 * Return: a pointer to the array, or NULL if size = 0.
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
			return (ptr);
		}
}
