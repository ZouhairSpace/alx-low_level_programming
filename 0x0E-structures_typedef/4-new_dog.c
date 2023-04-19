#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to a string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	int name_len = 0, own_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		puppy = malloc(sizeof(dog_t));

		if (puppy == NULL)
			return (NULL);

		puppy->name = malloc(sizeof(char) * name_len);

		if (puppy->name == NULL)
		{
			free(puppy);
			return (NULL);
		}

		puppy->owner = malloc(sizeof(char) * own_len);

		if (puppy->owner == NULL)
		{
			free(puppy->name);
			free(puppy);
			return (NULL);
		}

		puppy->name = _strcpy(puppy->name, name);
		puppy->owner = _strcpy(puppy->owner, owner);
		puppy->age = age;
	}

	return (puppy);
}


