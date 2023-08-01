#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at start of a listint_t list.
  *
  * @head: the head of double pointer
  *
  * @n: integer add the list
  *
  * Return: NULL if it failed
  *
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
