#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - Structure for holding information about a dog
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: dog struct.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_STRUCT */
