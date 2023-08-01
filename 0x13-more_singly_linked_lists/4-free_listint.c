#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the listint_t list
 * @head: head of the list
 * Return: NULL if there's an error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
