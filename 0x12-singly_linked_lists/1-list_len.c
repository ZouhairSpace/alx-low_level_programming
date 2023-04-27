#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in the linked list.
 **/

size_t list_len(const list_t *h)
{
	const list_t *current_node;
	unsigned int element_count = 0;

	current_node = h;
	while (current_node)
	{
		element_count++;
		current_node = current_node->next;
	}
	return(element_count);
}
