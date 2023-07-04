#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_t *reverse_listint - function that reverses a listint_t linked list.
 * @head: head of the list of nodes
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
