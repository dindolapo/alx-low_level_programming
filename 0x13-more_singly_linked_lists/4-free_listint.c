#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a linked list
 * @head: head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
