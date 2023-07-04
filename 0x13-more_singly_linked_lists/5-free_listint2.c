#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the list of nodes
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
