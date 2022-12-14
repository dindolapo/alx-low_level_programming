#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: head of the linked list
 * Return: void
 */
void free_listint2(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = NULL;
	}
}
