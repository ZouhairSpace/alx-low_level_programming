#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	unsigned int str_len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[str_len])
		str_len++;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next)
		current_node = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
