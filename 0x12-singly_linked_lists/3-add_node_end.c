#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_note_end - adds a new node to the end of a linked list
 * @head: points to the head of the list
 * @str: points to the string of the node
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;
	list_t *temp;

	temp = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
